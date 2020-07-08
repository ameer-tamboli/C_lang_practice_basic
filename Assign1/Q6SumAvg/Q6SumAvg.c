
#include<stdio.h>

int main()
{
	int sum=0, n=0, avg=0;
	printf("Enter the Number upto which Sum & average is to calculate");
	scanf("%d",&n);
	sum=((n*(n+1))/2);
	avg=sum/n;
	printf("The Resultant sum=%d & average=%d",sum,avg);
	return 0;
}
