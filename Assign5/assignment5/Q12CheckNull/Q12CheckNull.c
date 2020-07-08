#include<stdio.h>

int main()
{
	int i,j,m,n,count;
	i=j=m=n=count=0;
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

	for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        if(arr1[i][j]==0)
			       	count++;
			else
			       	count=0;
                }
        }
	if(count==(m*n))
		printf("Entered matrix is null matrix\n");
	else
		printf("entered matrix is not a null matrix\n");
	return 0;
}
