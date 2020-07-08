#include<stdio.h>

void fibo(int);

int main()
{
	int a=0,b=1,num,sum=0;
	printf("Enter the number for Fibonnaci Series");
	scanf("%d",&num);
	fibo(num);
	/*for(int i=0;i<=num;i++){
	if(i==0)
		printf("%d,",i);
	else if(i==1)
		printf("%d,",i);
	else if(i>1){
		sum=a+b;
		a=b;
		b=sum;
	        printf("%d,",sum);
	}*/
	
	return 0;
}

void fibo(int x)
{
	static int i=0;
	static int a=0;
	static int b=1,sum=0;
	if(i<=x)
	{

	 if(i==0)
	{
		printf("%d,",i);
		i++;
		fibo(x);
	}
        else	if(i==1)
	{
		printf("%d,",i);
		i++;
		fibo(x);
	}
	else if(i>1)
	{
		sum=a+b;
		a=b;
		b=sum;
		printf("%d,",sum);
		i++;
		fibo(x);
	}

      }

}

