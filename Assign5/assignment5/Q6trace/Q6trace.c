#include<stdio.h>

int main()
{
	int i,j,m,count,trace;
	i=j=m=count=trace=0;
	printf("enter the size of matrix1 (mxm) :\n");
	scanf("%d",&m);
	int arr1[m][m];
	printf("enter the elements of matrix1 %dx%d: \n",m,m);
	for(i=0;i<m;i++)
		for(j=0;j<m;j++)
			scanf("%d",&arr1[i][j]);
	printf("Given matrix1 %dx%d: \n",m,m);
	for(i=0;i<m;i++)
	{
		printf("\t\t");
		for(j=0;j<m;j++)
			printf("%d \t",arr1[i][j]);
		printf("\n");
	}

	for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
			   if(i==j)
                                trace=trace+arr1[i][j];
                        
                }
        }
	printf("Trace of entered matrix is=%d\n",trace);
	return 0;
}

