#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define	LIT	1
#define	OPR	2
#define LOD	3
#define	STO	4
#define CAL	5
#define INT	6
#define	JMP	7
#define	JPC	8
#define STACKSIZE 100005
typedef struct instruction{
	int f,l,a;
}instruction;
instruction code[100005];
extern void interpret();