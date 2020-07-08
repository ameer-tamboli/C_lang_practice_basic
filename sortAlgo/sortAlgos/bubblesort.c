/*
 *Program: Sorting an array
 *Created by: shikhar & saransh
 *PRN: 0088 & 0081
 *Date:9/03/2019
 *
 *
 *
 * */



#include<stdio.h>

//int arr[]={3,6,9,7,4,2,1};
//int arr[]={1,2,3,4,5,6,7};
int arr[]={1,5,3,4,5,3,7};


int main()
{
	int temp=0,revarr[7],l=6;
	for(int i=0;i<6;i++)
	{
		for(int j=i+1;j<7;j++)
		{
			if(arr[i]>arr[j])
			{
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	printf("\nSorted array in asscending order\n");
	for(int k=0;k<7;k++)
	{	printf("-->%d",arr[k]);
		revarr[l--]=arr[k];
	}
	printf("\nSorted array in descending order\n");
	for(int k=0;k<7;k++)
		printf("-->%d",revarr[k]);
	printf("\n");
}
