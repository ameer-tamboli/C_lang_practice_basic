#include<stdio.h>

int main()
{
	int size=0;
	printf("Enter size of an array:\n");
	scanf("%d",&size);
	int arr[size];
	int (*parr)[5];
	parr=arr;
	printf("Enter %d elements in an array\n",size);
	for(int i=0;i<size;i++)
		scanf("%d",&arr[i]);
	printf("last element of this array is:%d",(*(*(parr+1)-1)));
	return 0;
}
