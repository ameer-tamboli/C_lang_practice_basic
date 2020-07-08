#include<stdio.h>
#include<stdio_ext.h>

void strleng(char *,int *);
//strcopy(int *,int *);
//strcon(int *,int *);
//strcomp(int *,int *);
//strrev(int *,int *);


int main(void)
{
	char *p1;
	int *p2;
	int optn=0,len=0;
	char str[10];
	printf("enter a string : \n");
	scanf("%s",str);
	printf("choose operation 1.finding length 2.copying 3.concatenation 4.comparison 5.reversing \n");
	__fpurge(stdin);
	scanf("%d",&optn);
	switch(optn)
	{
		case 1: p1=str;
			p2=&len;
			strleng(str,p2);
			printf("the string length is %d ",*p2);

			break;
		case 2:

			break;
		case 3:

			break;
		case 4:

			break;
		case 5:

			break;
	}


	return 0;
}


void strleng(char *a,int *b)
{
	int i=0;
	while(*a!='\0')
	{
		(*b)++;
		printf("b=%d \n",b);
		a++;
		printf("a=%d \n",a+i);
	}
	/*for(int i=0;a[i]i!='\0';i++)
	{
		*b=*b+1;
	}*/

}
