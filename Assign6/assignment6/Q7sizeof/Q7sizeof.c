#include<stdio.h>

int main()
{
	int arr[5]={0,1,2,3,4};
	int (*parr)[5];
	parr=&arr;
	printf("sizeof(parr):=%d\n",sizeof(parr));
	printf("sizeof(*parr):=%d\n",sizeof(*parr));
	printf("sizeof(**parr):=%d\n",sizeof(**parr));
	printf("*(*(parr+1)-1):=%d\n",*(--(*(parr+1))));
//	printf("*(*++parr):=%d\n",*(*++parr));
	for(int i=0;i<5;i++)
		printf("&arr[%d]= %u \n",i,arr+i);
//	for(int j=0;j<5;j++)
//		printf("parr[%d]= %u \n",j,*(parr+j));

	return 0;
}


