#include<stdio.h>

void identity(int);
void null(int);

int main()
{
	int i,j,k,l,m,n,sum;
	printf("enter the size of matrix1 (mxm) :\n");
	scanf("%d",&m);
	identity(m);
	null(m);
	return 0;
}

void identity(int m)
{	
        int arr1[m][m],i=0,j=0;
        for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
                        if(i==j)
                                arr1[i][j]=1;
                        else
                                arr1[i][j]=0;
                }
        }
	printf("Identity matrix %dx%d: \n",m,m);
	for(i=0;i<m;i++)
        {
                printf("\t\t");
                for(j=0;j<m;j++)
                        printf("%d \t",arr1[i][j]);
                printf("\n");
        }

}

void null(int m)
{
        int arr1[m][m],i=0,j=0;
        for(i=0;i<m;i++)
        {
                for(j=0;j<m;j++)
                {
                  arr1[i][j]=0;
                }
        }
        printf("Null matrix1 %dx%d: \n",m,m);
        for(i=0;i<m;i++)
        {
                printf("\t\t");
                for(j=0;j<m;j++)
                        printf("%d \t",arr1[i][j]);
                printf("\n");
        }

}


