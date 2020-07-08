#include<stdio.h>
#define size 7

int main()
{
	int arr[10],a,b;
	//arr[size]={0};
	int *p;
	p=arr;
	printf("Enter elements into an array of size:%d \n",size);
	for(int i=0;i<size;i++)
		scanf("%d",p+i);
	printf("Entered arr[]=");
	for(int m=0;m<size;m++)
		printf("%d,",*(p+m));
	for(int j=0,k=size-1;j<size/2;j++,k--)
	{
		a=*(p+j);
	        *(p+j)=*(p+k);
		*(p+k)=a;
	}
	printf("\n Reversed arr[]=");
	for(int n=0;n<size;n++)
		printf("%d,",*(p+n));
	return 0;
}
	
