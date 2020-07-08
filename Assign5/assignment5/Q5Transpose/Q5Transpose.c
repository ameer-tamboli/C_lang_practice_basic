#include<stdio.h>

int main()
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
	printf("Given matrix1 %dx%d: \n",m,n);
	for(i=0;i<m;i++)
	{
		printf("\t\t");
		for(j=0;j<n;j++)
			printf("%d \t",arr1[i][j]);
		printf("\n");
	}
	int arr2[n][m];
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
			arr2[j][i]=arr1[i][j];
	printf("Transpose of matrix1 %dx%d: \n",n,m);
	for(i=0;i<n;i++)
	{
		printf("\t\t");
		for(j=0;j<m;j++)
			printf("%d \t",arr2[i][j]);
		printf("\n");
	}
	return 0;
}
	
