
#include<stdio.h>

int main()
{
	int var1,var2,var3;
	printf("Enter two numbers to swap..");
	scanf("%d%d",&var1,&var2);
	var1=var1+var2;
	var2=var1-var2;
	var1=var1-var2;
	printf("Swap without temp variable: a=%d , b=%d\n",var1,var2);
        var3=var1;
	var1=var2;
	var2=var3;
	printf("Swap with using temp variable: a=%d , b=%d\n",var1,var2);
	var2= var3^(var1=var1^(var3=var2^var1));
	printf("Swaping result using XOR in one line: a=%d , b=%d",var1, var2);
 
	return 0;
}
