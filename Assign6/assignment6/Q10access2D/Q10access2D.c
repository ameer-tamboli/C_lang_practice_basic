
#include<stdio.h>

int main()
{
	int arr[3][4]={10,20,30,40,50,60,70,80,90,100,110,120};
	int (*p)[4];
	p=arr;
	printf("\tsizeof(p)=%d",sizeof(p));
	printf("\tsizeof(*p)=%d",sizeof(*p));
	printf("\tsizeof(**p)=%d",sizeof(**p));
	printf("\tvalue of(p)=%d",p);
	printf("\tvalue of(p+1)=%d",p+1);
	for(int i=0;i<3;i++)
	{	for(int j=0;j<4;j++)
		{  
			printf("\tarr[%d][%d]=%d\n",i,j,arr[i][j]);
			printf("\t*((p+%d)[%d])=%d\n",i,j,*((p+i)[j]));
			printf("\t(*(p+%d))[%d]=%d\n",i,j,(*(p+i))[j]);
			printf("\t*(*(p+%d)+%d)=%d\n",i,j,*(*(p+i)+j));
		}
	}
	return 0;
}

