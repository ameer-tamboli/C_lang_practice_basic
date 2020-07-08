#include<stdio.h>
#include<math.h>

int main()
{
	int a,b,num,sum=0,c;
	printf("Enter the no. to check if it is Armstrong");
	scanf("%d",&num);
	a=num;
	if(a%10==0)
		printf("The given no. is not an Armstrong no");
	else
	{
		while(!(a%10==0))
		{
			b=a%10;
		        a=a/10;
		        b=pow(b,3);
                        sum=sum+b;
		}
		if(sum==num)
			printf("the given no. is an  armstrong no");
		else
			printf("the given no. is not an armstrong no");
	}
	return 0;
}


