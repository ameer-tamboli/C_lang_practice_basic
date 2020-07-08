#include<stdio.h>

int main()
{
	int a,b,c;
	float d,e;
	printf("enter the int no \n");
        scanf("%d",&a);
	printf("enter the float no \n");
        scanf("%f",&d);
        printf("the value of %%5d is   : %5d\n",a); 	
        printf("the value of %%05d is  :%05d\n",a); 	
        printf("the value of %%-5d is  :%-5d\n",a); 	
        printf("the value of %%8.2f is :%8.2f\n",d); 	
        printf("the value of %%.2f is  :%.2f\n",d);
	
	return 0;
}	
