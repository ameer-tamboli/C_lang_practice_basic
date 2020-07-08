#include<stdio.h>

int main()
{
	int num,b,c,count=0;
	printf("Enter any number:\n");
	scanf("%d",&num);
	b=num;
	while((num/10)!=0 || (num%10)!=0)
	{
		count++;
		num=num/10;
	//	printf("num=%d,count=%d,",num,count);
	}
	printf("Digits in %d are %d\n",b,count);
        return 0;
}
