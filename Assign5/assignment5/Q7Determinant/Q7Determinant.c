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
		//	num=arr[i][j];
		//	printf("\n num =%d\n",num);
			for(k=0;k<3;k++)
			{
				printf("In k=%d\n",k);
		//		printf("\t\t");
		//		int count=0;
		/*		if(j==0)
				{
					num=arr[j][k];
					printf("\nnum=%d\n",num);
				}
		*/		if(j!=0&&k!=i)
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
	return deter;det3
}




int main()
{
	int i,j,m,d,count,det;
	i=j=m=count=det=d=0;
	printf("enter the order of matrix1 (mxm) :\n");
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
	if(m==1)
	    d=1;
	else if(m==2)
	    d=det2(arr1);
	else 
	    d=det3(arr1);
	
	printf("The determinant for %dx%d matrix is : %d \n",m,m,d);
	return 0;
}
