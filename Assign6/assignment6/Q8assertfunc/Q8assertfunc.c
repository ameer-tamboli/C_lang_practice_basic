#include<stdio.h>
#include<assert.h>

int main()
{
	char ch[]="Assert function check";
	char *c;
	c=&ch;
	assert(c!='\0');
	printf("In Assert function\n");
	
	return 0;
}

