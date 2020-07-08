#include<stdio.h>

int main()
{
	int x=0x23344556,n=0;
	char *p,*p1,*p2;
	p=(char *)&x;
	printf("enter the size : ");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("little endian res p[%d] : %x \n",i,p[i]);
		p1[n-i-1]=p[i];
	}
	for(int j=0;j<n;j++)
		printf("big endian res p1[%d] : %x \n",j,p1[j]);

	return 0;
}

	
