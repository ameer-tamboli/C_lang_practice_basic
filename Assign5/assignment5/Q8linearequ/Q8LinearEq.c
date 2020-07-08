#include<stdio.h>
#include<math.h>

int det2( int arr1[2][2])
{
        int det=0;
        det=(arr1[0][0]*arr1[1][1])-(arr1[0][1]*arr1[1][0]);
        return det;
}

int det3(int arr[3][3])
{
	int i,j,k,s,r,count,num,det,deter;
	i=j=k=num=det=count=deter=0;
	int minor[2][2];
        for(i=0;i<3;i++)
        {
                printf("In i=%d\n",i);
                s=0;r=0;
                for(j=0;j<3;j++)
                {
                        printf("In j=%d\n",j);
                //      num=arr[i][j];
                //      printf("\n num =%d\n",num);
                        for(k=0;k<3;k++)
                        {
                                printf("In k=%d\n",k);
                //              printf("\t\t");
                //              int count=0;
                /*              if(j==0)
                                {
                                        num=arr[j][k];
                                        printf("\nnum=%d\n",num);
                                }
                */              if(j!=0&&k!=i)
                                {
                                        printf("arr[%d][%d]=%d\n",j,k,arr[j][k]);
                                        minor[r][s]=arr[j][k];
                                        s++;
                                        if(s>1)
                                        {
                                                r++;
                                                s=0;
                                        }
				}
                        }
        }
                printf("\n");
                det=det2(minor);
                printf("det=%d,num=%d arr[0][%d] \n",det,num,arr[0][i]);
                count=pow(-1,i);
                deter=deter+((count*(arr[0][i])*det));

        }
        return deter;
}


int main()
{
	int a,b,i,j,count,det,d,d1,d2,d3;
	a=b=i=j=count=d=d1=d2=d3=0;
	printf("Enter 3 linear equation in format[ax+by+cz=d]:\n");
	int arr[3][4],arr1[3][3],arr2[3][3],arr3[3][3],arr4[3][3];
//	printf("enter the elements in matrix1 %dx%d: \n",m,m);
	for(i=0;i<3;i++)
		for(j=0;j<4;j++)
			scanf("%d",&arr[i][j]);
	
	printf("Given matrix1 3x4: \n");
	for(i=0;i<3;i++)
	{
		printf("\t\t");
		for(j=0;j<4;j++)
			printf("%d\t",arr[i][j]);
		printf("\n");
	}
	for(int k=0;k<3;k++)
	{	
		printf("\t\t");
		for(int l=0;l<3;l++)
		{
			arr1[k][l]=arr[k][l];
			printf("%d\t",arr1[k][l]);

		}
		printf("\n");
	}
	d=det3(arr1);
	for(int m=0;m<3;m++)
	{	
		printf("\t\t");
		for(int n=1;n<4;n++)
		{
			arr2[a][b]=arr[m][n];
			printf("%d\t",arr2[m][n]);
			b++;
		}
		printf("\n");
		a++;
		b=0;

	}
        d1=det3(arr2);
	a=0;b=0;
/*	for(int o=0;o<3;o++)
	{	
		 printf("\t\t");
		for(int p=0;p<=3;p++)
		{
			if(p==1)
			   ++p;
			arr3[a][b]=arr1[o][p];
			printf("%d\t",arr3[o][p]);
		}
		printf("\n");
		a++;
		b=0;
	}
        d2=det3(arr3);
	a=0;b=0;
	for(int r=0;r<3;r++)
	{	
		 printf("\t\t");
		for(int s=0;s<=3;s++)
		{
			if(s==2)
			   ++s;
			arr4[r][s]=arr1[r][s];
			printf("%d\t",arr4[r][s]);
		}
		printf("\n");
		a++;
		b=0;
	}
	d3=det3(arr4);
	a=0;b=0;
        printf("determinant d=%d,d1=%d,d2=%d,d3=%d\n",d,d1,d2,d3);
	d1=d1/d;
	d2=d2/d;
	d3=d3/d;
	if(d==0)
		printf("Then no solution is possible and hence system of equations will be inconsistent.:\n");
	else
		printf("The solution for the linear equation are\tX=%d\tY=%d\tZ=%d \n",d1/d,d2/d,d3/d);*/
        printf("determinant d=%d,d1=%d,d2=%d,d3=%d\n",d,d1,d2,d3);

	return 0;
}
