#include<stdio.h>


int sumfunc(int);
int main()
{
	int x,sum=0,num,size;
	printf("Enter input size..\n");
	scanf("%d",&size);
	//int arr[size];
	printf("Enter Numbers to add..");
	sum=sumfunc(size);
	/*for(int i=0;i<size;i++)
	{
		scanf("%d",&arr[i]);
                sum=sum+arr[i];
	}

	for(int i=0;i<size;i++)
	{
		printf("%d\n",arr[i]);
	}*/
	printf("The sum of entered number is:%d",sum);
	return 0;
}

int sumfunc(int size)
{       static int sum=0;
	int i;
       	if(size>0)
	{ 
	   scanf("%d",&i);
           sum=sum+i;
	   sumfunc(--size);
	}
	return sum;
}


