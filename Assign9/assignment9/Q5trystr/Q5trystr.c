#include<stdio.h>

struct A
{
	int x;
	char *str;
};
struct A a1 = { 101, "abc" } , a2;
int main()
{
	a1.x=10;
	a1.str="hello"; 
	printf("%d%s\n",a1.x,a1.str);
        scanf("%d%s",&a1.x,a1.str);
	printf("%d%s\n",a1.x,a1.str);		
	a2 = a1; 

}

