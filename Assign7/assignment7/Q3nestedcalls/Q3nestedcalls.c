#include<stdio.h>
#include<ctype.h>
#include<math.h>
#include<stdio_ext.h>

int main(void)
{ 
	int x,y;
	char ch;
	printf("Enter the  value of x:");
	scanf("%d",&x);
	y=sqrt(pow(2,abs(x)));
	printf("The value of sqrt(pow(2,abs(x)))=%d\n",y);
	printf("Enter the alphabet to change into upper case: ");
	__fpurge(stdin);
	scanf("%c",&ch);
	printf("The Uppercase of alphabet entered:");
	putchar(toupper(ch));

	return 0;
}


