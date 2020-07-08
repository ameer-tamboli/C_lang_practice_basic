#include<stdio.h>

void test(int *);
void test1(int);
void test2(const int *);
//void test3(int *);

int main()
{
	int x=20,y=30;
	int *p;
	const int *q;
	p=&x;
	q=&y;
	test(p);
	test(q);
	test2(q);
	test()
	return 0;
}

void test(int *p1)
{
	int a=40,b;
	*p1=a;
	++p1;
	b=*p1;
	printf("%d \n",*p1)
}



void test1(int *p1)
{
	int a=40,b;
	*p1=a;
	++p1;
	b=*p1;
	printf("%d \n",*p1)
}


void test2(int *p1)
{
	int a=40,b;
	*p1=a;
	++p1;
	b=*p1;
	printf("%d \n",*p1)
}


void test3(int *p1)
{
	int a=40,b;
	*p1=a;
	++p1;
	b=*p1;
	printf("%d \n",*p1)
}








