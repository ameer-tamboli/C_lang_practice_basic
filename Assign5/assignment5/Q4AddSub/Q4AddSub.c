#include<stdio.h>

void addfunc(int,int);
void subfunc(int,int);
void mulfunc(void);

int main()
{
	int ch=0,sizea=0,m=0,n=0;
	printf("\t***Matrix Arthimetics***\t\n");
	printf("Enter your choice:\t1.Addition\t2.Subtraction\t3.Multiplication\n");
	scanf("%d",&ch);
	switch(ch)
	{
		case 1: printf("Enter size of a matrix(mxn)\n");
			scanf("%dx%d",&m,&n);
			addfunc(m,n);
			break;
		case 2: printf("enter size of a matrix(mxn)\n");
			scanf("%dx%d",&m,&n);
			subfunc(m,n);
			break;
		case 3: mulfunc();
			break;
		default: printf("Invalid choice entered\n");
			 break;
	}
	return 0;
}




void addfunc(int num1,int num2)
{
	int arr1[num1][num2],arr2[num1][num2],arr3[num1][num2];
	int i,j,k;
	printf("Enter elements in 1stMatrix of size %dx%d:",num1,num2);
	for(i=0;i<num1;i++)
		for(j=0;j<num2;j++)
			scanf("%d",&arr1[i][j]);
	printf("Enter elements in 2nd Matrix of size %dx%d:",num1,num2);
	for(i=0;i<num1;i++)
		for(j=0;j<num2;j++)
			scanf("%d",&arr2[i][j]);
	for(i=0;i<num1;i++)
		for(j=0;j<num2;j++)
			arr3[i][j]=arr1[i][j]+arr2[i][j];
	printf("Resultant Matrix is:\n");
	for(i=0;i<num1;i++)
	{       printf("\t\t");
		for(j=0;j<num2;j++)
		{ 
			printf("%d",arr3[i][j]);
			printf(" ");
		}
		printf("\n");
	}
}

void subfunc(int num1,int num2)
{
	int arr1[num1][num2],arr2[num1][num2],arr3[num1][num2];
	int i=0,j=0;
	printf("enter the elements of matrix1 %dx%d: \n",num1,num2);
	for(i=0;i<num1;i++)
		for(j=0;j<num2;j++)
			scanf("%d",&arr1[i][j]);
	printf("enter the elements of matrix2 %dx%d: \n",num1,num2);
	for(i=0;i<num1;i++)
		for(j=0;j<num2;j++)
			scanf("%d",&arr2[i][j]);
	for(i=0;i<num1;i++)
		for(j=0;j<num2;j++)
			arr3[i][j]=arr1[i][j]-arr2[i][j];
	printf("the resultant matrix is : \n");
	for(i=0;i<num1;i++)
	{
		for(j=0;j<num2;j++)
			printf("\t %d ",arr3[i][j]);
		printf("\n");
	}
}

void mulfunc()
{
	int i,j,k,l,m,n,sum;
	i=j=k=l=m=n=sum=0;
	printf("enter the size of matrix1 (mxn) :\n");
	scanf("%dx%d",&m,&n);
	int arr1[m][n];
	printf("enter the elements of matrix1 %dx%d: \n",m,n);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			scanf("%d",&arr1[i][j]);
	printf("enter the size of matrix2 (mxn) :\n");
	scanf("%dx%d",&k,&l);
	int arr2[k][l];
	printf("enter the elements of matrix1 %dx%d: \n",k,l);
	for(i=0;i<k;i++)
		for(j=0;j<l;j++)
			scanf("%d",&arr2[i][j]);

	int arr3[m][l];
	for(i=0;i<m;i++)
	{
		for(j=0;j<l;j++)
		{
			arr3[i][j]=0;
			for(int p=0;p<n;p++)
			{
				arr3[i][j]+=(arr1[i][p])*(arr2[p][j]);
			}
		}
	}
	for(i=0;i<m;i++)
	{
		printf("\t\t");
		for(j=0;j<l;j++)
			printf("%d \t",arr3[i][j]);
		printf("\n");
	}
	   
}
	



	
	
