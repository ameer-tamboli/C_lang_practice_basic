#include<stdio.h>

int main()
{
	int size,sum=0,max=1,min=1,j=0;
	float avg=0.0;
	printf("Enter size of an array element:");
	scanf("%d",&size);
	int arr[size];
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
        while(j<size)
	{
		if(arr[j]>max)
		{
			max=arr[j];
		}
	        sum=sum+arr[j];
		if(arr[j]<=min)
		{
			min=arr[j];
		}
		j++;
	}
	avg=sum/size;
	printf("Maximum element in given array is:%d\n",max);
	printf("Minimum element in given array is:%d\n",min);
	printf("Sum of  elements in given array is:%d\n",sum);
	printf("Average in given array is:%0.2f\n",avg);
	return 0;
}
