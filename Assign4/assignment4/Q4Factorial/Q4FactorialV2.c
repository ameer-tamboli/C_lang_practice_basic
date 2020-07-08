
#include<stdio.h>

int fact(int);

int main()
{
	int num=0,b;
	printf("Enter the no. to find the factorial");
	scanf("%d",&num);
	b=fact(num);
	/*for(int i=1;i<b-1;i++)
	{
              num=num*(b-i);
	}*/
	printf("The Factorial of %d is %d",num,b);
	return 0;
}


int fact(int num)
{
	 
	if(num>1){
		num=num*fact(num-1);
	}
	return num;
}



