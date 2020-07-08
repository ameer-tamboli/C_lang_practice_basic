#include<stdio.h>

int main()
{
	int num=0,b;
	printf("enter the no to find the factorial");
	scanf("%d",&num);
	b=num;
	for(int i=1;i<b-1;i++)
	{
              num=num*(b-i);
	}
	printf("The Factorial of %d is %d",b,num);
	return 0;
}
