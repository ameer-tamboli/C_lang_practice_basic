#include<stdio.h>

int main()
{
	int arr[2][3][4]={10,20,30,40,50,60,70,80,90,100,110,120,130,140,150,160,170,180,190,200,210,220,230,240};
	int(*q)[3][4];
	q=arr;
	printf("sizeof(q)=%d \n",sizeof(q));
	printf("sizeof(*q)=%d \n",sizeof(*q));
	printf("sizeof(**q)=%d \n",sizeof(**q));
	printf("sizeof(***q)=%d \n",sizeof(***q));
	printf("val of (q)=%u \n",(q));
	printf("val of (*q)=%u \n",(*q));
	printf("val of (**q)=%u \n",(**q));
	printf("val of (***q)=%u \n",(***q));
	
//	printf("val of (*q+1)=%u \n",(*q+1));
	printf("val of (q+1)=%u \n",(q+1));
	printf("val of (*q)+1)=%u \n",(*q)+1);
	printf("val of **q+1=%u \n",(**q)+1);
	printf("val of *(**q+1)+1=%u \n",*(**q+1)+1);
	for(int k=0;k<2;k++)
	{//	printf("\t\t");
		for(int i=0;i<3;i++)
		{	printf("\t\t");
			for(int j=0;j<4;j++)
				printf("arr[%d][%d][%d]=%d\t\t",k,i,j,arr[k][i][j]);
			printf("\n");
		}
		printf("\n");
	}
//	printf("val of (***q)=%u \n",(***q));
        

	return 0;
}
