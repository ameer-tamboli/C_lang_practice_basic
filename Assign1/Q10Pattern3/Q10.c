#include<stdio.h>
int main()
{
	int i,j,k,m=1,n=0;
	for(i=1;i<6;i++)
	{      
		for(k=5;k-m>0;k--)
       	 	{	
			printf(" ");
	        }
		for(j=1;j<=i+n;j++)
		{ 
			printf("%d",i);
		}
		m++;
		n++;
	        printf("\n");
	}
	return 0;
}
