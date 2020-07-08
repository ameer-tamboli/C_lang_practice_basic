#include<stdio.h>

void add(float,float);
void sub(float,float);
void mul(float,float);
void div(float,float);


int main()
{
	int choice;
	float a,b;
	printf("enter two nos\n");
	scanf("%f%f",&a,&b);
	printf("enter choice\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: add(a,b);
			break;
		case 2: sub(a,b);
			break;
		case 3: mul(a,b);
			break;
		case 4: div(a,b);
			break;
		default: printf("invalid choice");
	}
	return 0;
}

void add(float x, float y)
{
        float sum= x+y;
	printf("The sum after adding is %f",sum);
}

void sub(float x, float y)
{
	float sub= x-y;
	printf("The difference is %f\n",sub);
}

void mul(float x, float y)
{
	float mul=x*y;
	printf("The multiplication result is:%f\n",mul);
}
void div(float x, float y)
{
	float div= x/y;
	printf("The division result is:%f\n",div);
}

