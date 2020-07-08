#include<stdio.h>

int main()
{	
	int x=20,y=30;
	const int *p;
	p=&x;
//	int const *q;
  //      q=&y;
//	int * const r=&x;
//	const int * const s=&x;
	printf("*p=%d\t",*p);
	printf("p++=%d\t",p++);
	printf("(*p)++=%d\t",(*p)++);
	printf("++p=%d\t",++p);
	/*printf("*p=%d\t",*p);
	printf("*p=%d\t",*p);
	printf("*q=%d\t",*q);
	printf("r=%d\t",r);
	printf("*p=%d\t",*p);
	printf("*p=%d\t",*p);
	printf("
	return 0;
}
