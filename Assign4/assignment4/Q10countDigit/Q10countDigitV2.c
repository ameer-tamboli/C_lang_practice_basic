#include<stdio.h>

int count(int);
int main()
{
	int num,b,c,cnt=0;
	printf("Enter any number:\n");
	scanf("%d",&num);
	b=num;
	cnt=count(num);
	/*while((num/10)!=0 || (num%10)!=0)
	{
		count++;
		num=num/10;
	//	printf("num=%d,count=%d,",num,count);
	}*/
	printf("Digits in %d are %d\n",b,cnt);
        return 0;
}
int count(int x)
{
	static int cont=0;
	if((x/10)!=0 || (x%10)!=0)
	{
		cont++;
		x=x/10;
		count(x);
	}
	return cont;
	//printf("Digits in %d are %d\n",x,count);
}
