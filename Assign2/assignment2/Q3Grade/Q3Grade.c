#include<stdio.h>

int main()
{
	int marks=0,arr[10],sub=0,i=0;
	float percent=0,sum=0,total=0;
	printf("enter the no of subjects = \n");
	scanf("%d",&sub);
	for(i=1;i<=sub;i++)
	{
		printf("enter the marks in sub %d \n",i);
		scanf("%d",&arr[i]);
	}
	for(int j=1;j<=sub;j++)
	{
		sum=sum+arr[j];
		total=j*100;
		percent=(sum/total)*100.0;
		printf("sum= %f total = %f \n",sum,total);
	}
	printf("percent score is %f \n",percent);
	return 0;
}
