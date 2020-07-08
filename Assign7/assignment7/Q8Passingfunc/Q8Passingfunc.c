#include<stdio.h>
#include<stdlib.h>

int *passing_1D(int []);

void passing_2D(int [],int [],int,int,int);

int main()
{

	int ch;
	int *p,arr[10]={0};
	int m=0,n=0,k=0,l=0;
	int *ptr;
//	ptr=(int *)malloc(sizeof(int)*(m*l));
	printf("Enter your choice:\n");
	printf("1.Passing 1Darray\t2.Passing 2Darray\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter elements in 1Darray()\n");
			for(int i=0;i<10;i++)
				scanf("%d",(arr+i));
		        p=(int *)passing_1D(arr);
			printf("Sum=%d,Maximum No=%d,Minimum No.=%d\n",*p,p[1],p[2]);
			break;
		case 2:	printf("Enter the size of matrix1 (mxn) :\n");
			scanf("%dx%d",&m,&n);
			int arr1[m][n];
			printf("enter the elements of matrix1 %dx%d: \n",m,n);
			for(int i=0;i<m;i++)
				for(int j=0;j<n;j++)
					scanf("%d",&arr1[i][j]);
		       	printf("Enter the size of matrix2 (mxn) :\n");
		       	scanf("%dx%d",&k,&l);
		      	int arr2[k][l];
			printf("enter the elements of matrix2 %dx%d: \n",k,l);
			for(int i=0;i<k;i++)
				for(int j=0;j<l;j++)
					scanf("%d",&arr2[i][j]);
		//	ptr=(int *)malloc(sizeof(int)*(m*l));
		//	ptr=(int *)passing_2D(&arr1,&arr2,m,l,n);
			passing_2D(arr1,arr2,m,l,n);
	/*		for(int i=0;i<m;i++)
			{
				printf("\t\t");
				for(int j=0;j<l;j++){
					printf("%d \t",arr1[i][j]);
				}
				printf("\n");
			}*/
		   	break;
		
	//	default: printf("Invalid choice\n");
	}
	return 0;
}

int *passing_1D(int arr[])
{
	int sum=0,min=0,max=0;
	int *ptr;
	max=arr[0];
	min=arr[0];
	for(int i=0;i<10;i++)
	{
		sum=sum+arr[i];
		if(arr[i]>max)
			max=arr[i];
		if(min>arr[i])
			min=arr[i];
	}
	ptr=(int *)malloc(sizeof(int) *3);
	ptr[0]=sum;
	ptr[1]=max;
	ptr[2]=min;
	return ptr;
}

void passing_2D(int arr1[],int arr2[],int m,int l,int n)
{
	for(int i=0;i<m;i++)
        {
                printf("\t\t");
                for(int j=0;j<l;j++)
                        printf("%d \t",(arr1[i]+j));
                printf("\n");
        }
	for(int i=0;i<m;i++)
        {
                printf("\t\t");
                for(int j=0;j<l;j++)
                        printf("%d \t",(arr2[i]+j));
                printf("\n");
        }
	int arr3[m][l];
	for(int i=0;i<m;i++)
        {
                for(int j=0;j<l;j++)
                {
                        arr3[i][j]=0;
                        for(int p=0;p<n;p++)
                        {
                                arr3[i][j]+=(arr1[i]+p)*(arr2[p]+j);
                        }
                }
        }
	for(int i=0;i<m;i++)
        {
                printf("\t\t");
                for(int j=0;j<l;j++)
                        printf("%d \t",arr3[i][j]);
                printf("\n");
        }

}
	



	
