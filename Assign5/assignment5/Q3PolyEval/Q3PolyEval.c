#include<stdio.h>
#include<math.h>

int main()
{
	int order=0,x=0,a=0,i=0,eval=0;
	printf("enter the order of polynomial exp : \n");
	scanf("%d",&order);
	int arr1[order+1];
	printf("enter the coefficients of x of order %d and const value :\n ",order);
	for(i=0;i<order+1;i++)
		scanf("%d",&arr1[i]);
	printf("enter the value of x to solve the polynomial: \n");
	scanf("%d",&a);
	x=order;
	for(i=0;i<order+1;i++)
	{
		if(x>-1)
			eval=eval+(arr1[i]*pow(a,x));
		x--;
	}
	printf("the result of evaluation of the given polynomial for the value of x = %d is : %d \n",a,eval);
        return 0;
}	







