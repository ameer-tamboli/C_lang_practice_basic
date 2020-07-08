#include<stdio.h>

int main()
{
	int i,j,m,count;
	i=j=m=count=0;
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
                        if(arr1[i][j]==0||arr1[i][j]==1)
			{
			   if((i==j)&&(arr1[i][j]==1))
                                count++;
			   else if((i!=j)&&(arr1[i][j]==1))
				   count=0;

                        }
                }
        }
	if(count==m)
		printf("Entered matrix is identity matrix\n");
	else
		printf("entered matrix is not a identity matrix\n");
	return 0;
}

