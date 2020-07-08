#include<stdio.h>

int fact(int *);

int main()
{
	int num=0,b;
	static int count;
	printf("Enter the no. to find the factorial");
	scanf("%d",&num);
	count=fact(&num);
	printf("The Factorial is %d\n",num);
	printf("function call count = %d \n",count);
	return 0;
}


int fact(int *num)
{
	static int fcount=0;
	int t;
	if(*num>1)
	{
		fcount++;
		t=(*num)-1;
		fact(&t);
		*num = (*num)*t;
	}
	return fcount;
}



