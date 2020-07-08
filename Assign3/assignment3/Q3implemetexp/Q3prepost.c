#include<stdio.h>

int main()
{
	int k,i,y,q,p,x;
	k=y=i=p=q=x=0;
	printf("enter the value of i= x= p=\n");
	scanf("%d%d%d",&i,&x,&p);
	printf("value of k for k=i++ is %d\n ",k=(i++));
	printf("value of k for k=++i is %d\n ",k=(++i));
	
	printf("value of y for y=x++*10 is %d\n ",y=(x++*10));
	printf("value of y for y=++x*10 is %d\n ",y=(++x*10));

	printf("value of q for q=p--/3 is %d\n ",q=p--/3);
	printf("value of q for q=--p/3 is %d\n ",q=--p/3);
	
	return 0;
}
