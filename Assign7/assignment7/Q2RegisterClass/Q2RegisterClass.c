#include<stdio.h>

register int globs = 10;

int main(void)
{
	register int locs=20;
	register int *p1,*p2;
//	p1=&local;
//	p2=&global;
	printf("The address of register for local : %d \n",locs+1);
	printf("The address of register for global : %d \n",globs+2); //register storage class have local scope and
                                                                      //we cannot access the memory address of register storage class

	return 0;
}
