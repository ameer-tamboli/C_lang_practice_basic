#include<stdio.h>
#include<math.h>

int main()
{
        int num=0,i=0,k=0;
	long int n;
	printf("Enter a number to find its power:");
	scanf("%d",&num);
	printf("Enter the index:");
	scanf("%d",&i);
	n= num;
	while(k<i)
	{
		n=pow(n,num);
		printf("n=%ld,k=%d\n",n,k);
		k++;
	}
	printf("Power of Number upto its index is:%ld\n",n);
	return 0;
}


