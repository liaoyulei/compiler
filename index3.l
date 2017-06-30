%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<string.h>
	#include"index3.tab.h"
%}
whitespace			[ \t\r\n]+
keyword				if|then|else|while|do|read|write|call|begin|end|const|var|procedure|odd|repeat|until
ident				[A-Za-z][A-Za-z0-9]*
num					[0-9]+
operator			\+|\-|\*|\/
assignment_operator	\:\=
relational_operator	\=|\#|\<\>|\<|\<\=|\>|\>\=
symbol				\.|\,|\;|\(|\)|\[|\]|\{|\}
%%
{whitespace}			{}
{keyword}				{
							if(!strcmp(yytext,"if")){return IF;}
							if(!strcmp(yytext,"then")){return THEN;}
							if(!strcmp(yytext,"else")){return ELSE;}
							if(!strcmp(yytext,"while")){return WHILE;}
							if(!strcmp(yytext,"do")){return DO;}
							if(!strcmp(yytext,"read")){return READ;}
							if(!strcmp(yytext,"write")){return WRITE;}
							if(!strcmp(yytext,"call")){return CALL;}
							if(!strcmp(yytext,"begin")){return BEGIN;}
							if(!strcmp(yytext,"end")){return END;}
							if(!strcmp(yytext,"const")){return CONST;}
							if(!strcmp(yytext,"var")){return VAR;}
							if(!strcmp(yytext,"procedure")){return PROCEDURE;}
							if(!strcmp(yytext,"odd")){return ODD;}
							if(!strcmp(yytext,"repeat")){return REPEAT;}
							if(!strcmp(yytext,"until")){return UNTIL;}
						}
{ident}					{return IDENT;}
{num}					{
							yylval=atoi(yytext);
							return NUM;
						}
{operator}				{return *yytext;}
{assignment_operator}	{return ASSIGNMENT_OPERATOR;}
{relational_operator}	{
							if(!strcmp(yytext,"=")){return EQUAL;}
							if(!strcmp(yytext,"#")){return NOTEQUAL;}
							if(!strcmp(yytext,"<>")){return NOTEQUAL;}
							if(!strcmp(yytext,"<")){return LOW;}
							if(!strcmp(yytext,"<=")){return LOWEQUAL;}
							if(!strcmp(yytext,">")){return GREAT;}
							if(!strcmp(yytext,">=")){return GREATEQUAL;}
						}
{symbol}				{return *yytext;}
%%
int yywrap(){
	return 1;
}