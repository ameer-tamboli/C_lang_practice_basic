#include<stdio.h>

int pascal(int,int);
int fact(int);

int main()
{
	int i,j,sum,temp,num,m=0,n=0;
	printf("Enter a number upto which print pascal triangle");
	scanf("%d",&num);
	for(i=0;i<num;i++)
	{	
		printf("\t\t");
		for(int k=num;k-m>0;k--)
			printf("   ");
		for(j=0;j<=i;j++)
		{
			printf("%5ld ",pascal(i,j));
			/*	if(j==1)
			 printf("1");
			else if(j>1 && j<i+n)
			  printf(" ");
			else
			  printf("1");*/
		}
		m++;
	//	n++;
		printf("\n");
	}
	return 0;
}

int pascal(int n,int r)
{
	int num1=0;

	num1=(fact(n))/((fact(r)*fact(n-r)));
	return num1;
}

int fact(int a)
{
	int num2=1;
	for(int i=a;i>1;i--)
		num2=num2*i;
	return num2;
}


