
#include<stdio.h>

int main()
{
	int a=0,b=1,num,sum=0;
	printf("Enter the number for Fibonnaci Series");
	scanf("%d",&num);
	for(int i=0;i<=num;i++){
	if(i==0)
		printf("%d,",i);
	else if(i==1)
		printf("%d,",i);
	else if(i>1){
		sum=a+b;
		a=b;
		b=sum;
	        printf("%d,",sum);
	}
	}
	return 0;
}

