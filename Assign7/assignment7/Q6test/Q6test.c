#include<stdio.h>

int *test(int);
int main()
{
	int x=20;
	int *ptr;
	ptr=(int *)test(x);
	printf("Value of X after function calling is:%d\n ",*ptr);
	return 0;
}

int *test(int x)
{
	int y;
	int *p1;
	p1=&y;
	y=x*x;
	return p1;
}


