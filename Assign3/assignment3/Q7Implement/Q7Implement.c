#include<stdio.h>

int main()
{
	

	int a=10,b=20,c=30,d=0;
	d=++a,++b,++c,a+5;
	printf("%d\n",d);
	d=(++a,++b,++c,a+5);
	printf("%d\n",d);
	return 0;
}

