#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,num,sum=0,c;
	printf("Enter the no. to check if it is Recursive \n");
	scanf("%d",&num);
	a=num;
	while(!(a/10==0))
	{
		sum=0;
		while(!(a%10==0))
		{
			b=a%10;
		        a=a/10;
		        sum=sum+b;
		}
	printf("sum=%d \n",sum);
	a=sum;
	}
	return 0;
}

