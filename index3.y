%{
	#include "index3.h"
	extern FILE *yyin;
	extern char *yytext;
	typedef struct symbol{
		char name[15],kind;
		int level,val,addr,previous;
	}symbol;
	symbol table[100005];
	int display[100005],sp=1,top=1,distop=1,level=-1,cdtop=0;
%}
%start	START
%token	IDENT NUM ASSIGNMENT_OPERATOR IF THEN ELSE WHILE DO READ WRITE CALL BEGIN END CONST VAR PROCEDURE ODD REPEAT UNTIL EQUAL NOTEQUAL LOW LOWEQUAL GREAT GREATEQUAL
%left	'+' '-'
%left	'*' '/'
%%
START						:	BLOCK '.'
							;
BLOCK						:	{mktable();$0=top-1;table[$0].addr=cdtop;emit(JMP,0);}	CONSTANT_DECLARATION	{$1=top;}	VARINAT_DECLARATION	{$2=top;}	PROCEDURE_DECLARATION	{table[$0].val=cdtop;code[table[$0].addr].a=cdtop;emit(INT,$2-$1+3);}	STATEMENT 	{emit(OPR,0);rmtable();}
							;
CONSTANT_DECLARATION		:
							|	CONST CONST_DEFINITION TAIL_CONSTANT_DECLARATION ';'
							;
TAIL_CONSTANT_DECLARATION	:
							|	',' CONST_DEFINITION TAIL_CONSTANT_DECLARATION
							;
CONST_DEFINITION			:	IDENT	{insert(yytext,'c');}	EQUAL NUM	{table[top-1].val=yylval;}
							;
VARINAT_DECLARATION			:
							|	VAR IDENT	{insert(yytext,'v');}	TAIL_VARINAT_DECLARATION ';'
							;
TAIL_VARINAT_DECLARATION	:
							|	',' IDENT	{insert(yytext,'v');}	TAIL_VARINAT_DECLARATION
							;
PROCEDURE_DECLARATION		:
							|	PROCEDURE_HEADER BLOCK ';' PROCEDURE_DECLARATION
							;
PROCEDURE_HEADER			:	PROCEDURE IDENT	{insert(yytext,'p');}	';'
							;
STATEMENT					:	ASSIGNMENT_STATEMENT
							|	COMPOUND_STATEMENT
							|	CONDITIONAL_STATEMENT
							|	LOOP_STATEMENT
							|	PROCEDURE_CALL_STATEMENT
							|	READ_STATEMENT
							|	WRITE_STATEMENT
							|	REPEAT_STATEMENT
							;
ASSIGNMENT_STATEMENT		:	IDENT	{$1=lookup(yytext);}	ASSIGNMENT_OPERATOR EXPRESSION	{emit(STO,$1);}
							;
COMPOUND_STATEMENT			:	BEGIN STATEMENT ';' TAIL_COMPOUND_STATEMENT END
							;
TAIL_COMPOUND_STATEMENT		:
							|	STATEMENT ';' TAIL_COMPOUND_STATEMENT
							;
CONDITION					:	EXPRESSION EQUAL EXPRESSION	{emit(OPR,8);}
							|	EXPRESSION NOTEQUAL EXPRESSION	{emit(OPR,9);}
							|	EXPRESSION LOW EXPRESSION	{emit(OPR,10);}
							|	EXPRESSION LOWEQUAL EXPRESSION	{emit(OPR,13);}
							|	EXPRESSION GREAT EXPRESSION	{emit(OPR,12);}
							|	EXPRESSION GREATEQUAL EXPRESSION	{emit(OPR,11);}
							|	ODD EXPRESSION {emit(OPR,6);}
							;
CONDITIONAL_STATEMENT		:	IF CONDITION	{$2=cdtop;emit(JPC,0);}	THEN STATEMENT {$4=cdtop;emit(JMP,0);code[$2].a=cdtop;}	TAIL_CONDITIONAL_STATEMENT	{code[$4].a=cdtop;}
							;
TAIL_CONDITIONAL_STATEMENT	:
							|	ELSE STATEMENT
							;
EXPRESSION					:	ITEM TAIL_EXPRESSION
							|	'+' ITEM	{emit(OPR,2);}	TAIL_EXPRESSION
							|	'-' ITEM	{emit(OPR,3);}	TAIL_EXPRESSION
							;
TAIL_EXPRESSION				:
							|	'+' ITEM	{emit(OPR,2);}	TAIL_EXPRESSION
							|	'-' ITEM	{emit(OPR,3);}	TAIL_EXPRESSION
							;
ITEM						:	FACTOR TAIL_ITEM
							;
TAIL_ITEM					:
							|	'*'	FACTOR	{emit(OPR,4);}	TAIL_ITEM
							|	'/' FACTOR	{emit(OPR,5);}	TAIL_ITEM
							;
FACTOR						:	IDENT	{$1=lookup(yytext);emit(LOD,$1);}
							|	NUM	{emit(LIT,yylval);}
							|	'(' EXPRESSION ')'
							;
LOOP_STATEMENT				:	WHILE	{$1=cdtop;}	CONDITION	{$2=cdtop;emit(JPC,0);}	DO STATEMENT	{emit(JMP,$1);code[$2].a=cdtop;}
							;
PROCEDURE_CALL_STATEMENT	:	CALL IDENT	{$2=lookup(yytext);emit(CAL,$2);}
							;
READ_STATEMENT				:	READ '(' IDENT	{$3=lookup(yytext);emit(OPR,16);emit(STO,$3);}	TAIL_READ_STATEMENT ')'
							;
TAIL_READ_STATEMENT			:
							|	',' IDENT	{$2=lookup(yytext);emit(OPR,16);emit(STO,$2);}	TAIL_READ_STATEMENT
							;
WRITE_STATEMENT				:	WRITE '(' EXPRESSION	{emit(OPR,14);emit(OPR,15);}	TAIL_WRITE_STATEMENT ')'
							;
TAIL_WRITE_STATEMENT		:
							|	',' EXPRESSION	{emit(OPR,14);emit(OPR,15);}	TAIL_WRITE_STATEMENT
							;
REPEAT_STATEMENT			:	REPEAT	{$1=cdtop;}	STATEMENT ';' TAIL_COMPOUND_STATEMENT UNTIL CONDITION	{emit(JPC,$1);}
							;
%%
void mktable(){
	display[distop++]=top;
	++level;
	sp=top;
}
void rmtable(){
	top=display[--distop];
	--level;
	if(level>=0){
		sp=display[distop-1];
		for(;table[sp].kind=='c';++sp);
	}
}
void insert(char *s,char c){
	int i;
	for(i=display[distop-1];i<top;++i){
		if(!strcmp(table[i].name,s)){
			printf("%s has been declared.\n",s);
			exit(0);
		}
	}
	strcpy(table[top].name,s);
	table[top].kind=c;
	table[top].level=level;
	table[top].addr=top-sp;
	table[top].previous=0;
	if(c=='c'){
		++sp;
	}
	if(top>display[distop-1]){
		table[top-1].previous=top;
	}
	++top;
}
int lookup(char *s){
	int i,j;
	for(i=distop-1;i;--i){
		for(j=display[i];j;j=table[j].previous){
			if(!strcmp(table[j].name,s)){
				return j;
			}
		}
	}
	printf("%s has't been declared.\n",s);
	exit(0);
}
void emit(int f,int x){
	switch(f){
		case LOD:
			if(table[x].kind=='c'){
				code[cdtop].f=LIT;
				code[cdtop].l=0;
				code[cdtop].a=table[x].val;
			}
			else if(table[x].kind=='v'){
				code[cdtop].f=f;
				code[cdtop].l=level-table[x].level;
				code[cdtop].a=table[x].addr+3;
			}
			else{
				printf("%s isn't a constant or varinat\n",table[x].name);
				exit(0);
			}
			break;
		case STO:
			if(table[x].kind!='v'){
				printf("%s isn't a varinat\n",table[x].name);
				exit(0);
			}
			else{
				code[cdtop].f=f;
				code[cdtop].l=level-table[x].level;
				code[cdtop].a=table[x].addr+3;
			}
			break;
		case CAL:
			if(table[x].kind!='p'){
				printf("%s isn't a procedure\n",table[x].name);
				exit(0);
			}
			else{
				code[cdtop].f=f;
				code[cdtop].l=level-table[x].level;
				code[cdtop].a=table[x].val;
			}
			break;
		default:
			code[cdtop].f=f;
			code[cdtop].l=0;
			code[cdtop].a=x;
			break;
	}
	++cdtop;
}
int main(int argc,char *argv[]){
	int i;
	FILE *file;
	switch(argc){
		case 1:
			file=fopen("test.frag","r");
            if(!file){
                printf("Default file is not found\n");
                exit(1);
            }
            else{
                yyin=file;
            }
            break;
		case 2:
			file=fopen(argv[1],"r");
			if(!file){
				printf("FILE %s is not found\n",argv[1]);
				exit(1);
			}
			else{
				yyin=file;
				break;
			}
		default:
			printf("useage:flex [filename]\n");
			exit(1);
	}
	yyin=file;
	yyparse();
	fclose(file);
	for(i=0;code[i].f;++i){
		printf("(%d): ",i);
		switch(code[i].f){
			case LIT:printf("LIT");break;
			case OPR:printf("OPR");break;
			case LOD:printf("LOD");break;
			case STO:printf("STO");break;
			case CAL:printf("CAL");break;
			case INT:printf("INT");break;
			case JMP:printf("JMP");break;
			case JPC:printf("JPC");break;
		}
		printf(" %d %d\n",code[i].l,code[i].a);
	}
	printf("\n");
	interpret();
	return 0;
}
int yyerror (char *s) {
	printf ("%s: %s\n", s,yytext);
	return -1;
}