#include<stdio.h>

int main()
{
	int a=0,b=0,c=0;
	printf("Enter a 3 numbers:");
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a>c)?printf("%d is largest\n",a):((b>c)?printf("%d is largest\n",b):printf("%d is largest\n",c));
         return 0;
}

	
	
