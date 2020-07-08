#include<stdio.h>

void selectn(int *,int);

int main(void)
{
	//int arr[]={3,6,9,7,4,2,1};
	int arr[]={3,6,9,7,1,2,8};

	selectn(arr,7);
	printf("\nSlection sort in Assending order\n");
	for(int i=0;i<7;i++)
		printf("-->%d",arr[i]);
	printf("\n");
	return 0;
}


void selectn(int *p, int size)
{
	int i=0,j=0,k=0,min=0;
	for(i=0;i<size-1;i++)
	{
		min=*(p+i);
		for(j=i+1;j<size;j++)
		{
			if(min>=*(p+j))
			{
				k=j;	
				min=*(p+j);
			}
		}
		*(p+k)=*(p+i);
		*(p+i)=min;
	} 

}
