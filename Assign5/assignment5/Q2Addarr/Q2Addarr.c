#include<stdio.h>

int main()
{
	int arr1[10]={0},arr2[10]={0},sum=0;
        int *p1,*p2;
        p1=arr1;
	p2=arr2;
	printf("enter elements in arr1 \n");
	for(int i=0;i<10;i++)
		scanf("%d",p1+i);
	printf("enter elements in arr2 \n");
	for(int j=0;j<10;j++)
		scanf("%d",p2+j);
	printf("sum of two arrays: ");
	for(int k=0;k<10;k++)
	{
		sum=*(p1+k)+*(p2+k);
		printf("%d,",sum);
	}
	return 0;
}


