
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("Enter three digit no.");
	scanf("%3d",&a);
	b=a%100;
        a=a/100;
	c=b%10;
	b=b/10;
	printf("Output after Reversing is:- %d%d%d",c,b,a);
	return 0;
}

