#include<stdio.h>

int main()
{
	int a,b=0,num,sum=0,i=2;
	printf("Enter the no. to check if it is Perfect No.\n");
	scanf("%d",&num);
	a=num;
	while((a/2)>=i)
	{ 
		b=a/i;
		if((b!=0)&&(a%i==0))
                   sum=sum+b;
		i++;
			
	}
	sum=sum+1;
	printf("Sum=%d\n",sum);
	if(sum==num)
		printf("%d is a perfect number\n",num);
	else
		printf("%d is not a perfect number\n",num);
		
	return 0;
}
