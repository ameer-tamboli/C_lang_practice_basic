#include<stdio.h>

int main()
{
	int x,sum=0,num,size;
	printf("Enter input size..\n");
	scanf("%d",&size);
	int arr[size];
	printf("Enter Numbers..");
	for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
                sum=sum+arr[i];
	}

	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}
	printf("The sum of entered number is:%d",sum);
	return 0;
}




