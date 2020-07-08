#include<stdio.h>

void swapbyvalue(int ,int );
void swapbyref(int *,int *);
int main(void)
{
	int var1,var2,var3,var4;
	printf("Enter two values to swap by value:\n");
	scanf("%d%d",&var1,&var2);
	swapbyvalue(var1,var2);
	printf("Values after call by value  var1=%d var2=%d\n",var1,var2);
	printf("Enter two values to swap by reference\n");
	scanf("%d%d",&var3,&var4);
	swapbyref(&var3,&var4);
	printf("Values after call by reference var3=%d var4=%d\n",var3,var4);

	return 0;
}

void swapbyvalue(int a,int b)
{
	int temp;
	temp=a;
	a=b;
	b=temp;
	printf("Values after swapping var1=%d var2=%d\n",a,b);
}

void swapbyref(int *a,int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
	printf("Values after swapping var1=%d var2=%d\n",*a,*b);
}




	




	

