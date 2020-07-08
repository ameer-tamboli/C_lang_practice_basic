#include<stdio.h>
#include<stdlib.h>

int * fun(int,int);

int main(void)
{
	int a,b,c;
	a=b=c=0;
	int *p1;
	printf("enter two nos. : \n");
	scanf("%d%d",&a,&b);
	p1=(int *)fun(a,b);
	printf("sum=%d \n",*p1);
	printf("prod=%d \n",p1[1]);

	return 0;
}

int * fun(int num1,int num2)
{
	int sum=0,prod=0;
	int *ptr;
	sum=num1+num2;
	prod=num1*num2;
	ptr=(int *)malloc(sizeof(int)*2);
	ptr[0]=sum;
	ptr[1]=prod;
	
	return ptr;
}


