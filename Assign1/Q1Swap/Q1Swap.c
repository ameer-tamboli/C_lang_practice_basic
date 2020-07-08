#include<stdio.h>

int main()
{
	int a,b;
	printf("ENTER Two NOs \n");
	scanf("%d%d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("swap res a=%d, b=%d",a,b);
	return 0;

}


	
