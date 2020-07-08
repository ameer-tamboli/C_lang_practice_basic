#include<stdio.h>

void add(int,int,int*);

int main()
{
	int a,b,c,d;
	a=b=c=d=0;
	printf("enter two nos: ");
	scanf("%d%d",&a,&b);
	add(a,b,&c);
	printf("\n result= %d \n",c);
	return 0;
}

void add(int i,int j,int *k)
{
	int res=0;
	res=i+j;
	*k=res;
}
