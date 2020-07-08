#include<stdio.h>
#include<stddef.h>

struct A{
	int x;
	double y;
	float z;
	char ch;
}a1;

int main(void)
{
	int base=0;
	int xsize=0,xoff=0;
	printf("\tsizeof(struct A)=%d\n",sizeof(struct A));
	xsize=&(a1.y);
	xoff=offsetof(struct A,y);
	printf("\noffsetof(x)=%d",xoff);
	base=xsize-xoff;
	printf("\tbase address is=%d\n",base);
	return 0;
}
