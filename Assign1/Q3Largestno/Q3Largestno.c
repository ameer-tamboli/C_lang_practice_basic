
#include<stdio.h>

int main()
{
	int a,b,c;
	printf("enter the three nos.");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && b>c)
		printf("%d is the largest no.",a);
	else
	{
	  if(b>c)
		  printf("%d is the largest no",b);
	  else
		  printf("%d is the largest no",c);
	}

	return 0;
}
