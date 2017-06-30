#include "index3.h"
int base(int l,int s[],int b){
	for(;l;--l){
		b=s[b];
	}
	return b;
}
void interpret() 
{
    int p, b, t;
    instruction i;  //instruction ��ָ������Ͷ��壨����������f,l,a���������м��뵽ͷ�ļ��У��������ļ�����
    int s[STACKSIZE];//stacksize������ջ��С�����Լ�����

    printf("start pl0\n");
    t=0; b=1;  //t������ջ��ָ�룻b������ַ��
    p=0;	// ָ��ָ��
    s[1]=0; s[2]=0; s[3]=0;
    do {
	
        i=code[p++];//codeΪָ�������飬�䶨�������м��뵽ͷ�ļ��У��������ļ�����
        switch (i.f) 
        {
        case LIT: 
            t=t+1;
            s[t]=i.a;
            break;
        case OPR: 
            switch(i.a) 
            {
                case 0:
                    t=b-1;
                    p=s[t+3];
                    b=s[t+2];
                    break;
                case 1: 
                    s[t]=-s[t];
                    break;
                case 2: 
                    t=t-1;
                    s[t]=s[t] + s[t+1];
                    break;
                case 3:
                    t=t-1;
                    s[t]=s[t] - s[t+1];
                    break;
                case 4: 
                    t=t-1;
                    s[t]=s[t] * s[t+1];
                    break;
                case 5: 
                    t=t-1;
                    s[t]=s[t] / s[t+1];
                    break;
                case 6: 
                    s[t]=(s[t] % 2 == 1);
                    break;
                case 8: 
                    t=t-1;
					
                    s[t]=(s[t] == s[t+1]);
                    break;
                case 9:
                    t=t-1;
                    s[t]=(s[t] != s[t+1]);
                    break;
                case 10:
                    t=t-1;
                    s[t]=(s[t]<s[t+1]);
                    break;
                case 11: 
                    t=t-1;
                    s[t]=(s[t]>=s[t+1]);
                    break;
                case 12: 
                    t=t-1;
                    s[t]=(s[t]>s[t+1]);
                    break;
                case 13: 
                    t=t-1;
                    s[t]=(s[t]<=s[t+1]);
                    break;
                case 14: 
                    printf(" %d", s[t]);
                    t=t-1;
                    break;
                case 15: 
                    printf("\n");
                    break;
                case 16: 
                    t=t+1;
                    printf(" ? ");
                    scanf("%d", &s[t]);
                    break;
            }
		    break;
        case LOD: 
            t=t+1;
            s[t]=s[base(i.l, s, b)+i.a];
            break;
        case STO: 
            s[base(i.l, s, b)+i.a]=s[t];
            t=t-1;
            break;
        case CAL:
            s[t+1]=base(i.l, s, b);
            s[t+2]=b;
            s[t+3]=p;
            b=t+1;
            p=i.a;
            break;
        case INT: 
            t=t+i.a;
            break;
        case JMP: 
            p=i.a;
            break;
        case JPC: 
            if (s[t]==0) 
            {
                p=i.a;
            }
			//printf("---nextp %d  ----\n",p);
            t=t-1;
            break;
        }//end switch
    }while (p!=0);
}