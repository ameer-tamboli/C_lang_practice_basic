#include<stdio.h>
int add(int n1,int n2);
int mul(int p,int q );
int div(int x,int y);
int main()
{
	int num1,num2;
	printf("Enter the numbers");
	scanf("%d %d",&num1,num2);
	add=int add(num1,num2);
	printf("=%d\n",add);
	mul=int mul(num1,num2);
	printf("mul=%d\n",mul);
	div=int div(num1,nuum2);
	printf("div=%d",div);
	return 0;
	
}
int add(int n1,int n2)
{
	int add;
	add=n1+n2;
	return add;
}
int mul(int p,int q)
{
        int mul;
        res2=p+q;
        return mul;
}
int div(int x,int y)
{
        int div;
        div=x+y;
        return div;
}


