#include<stdio.h>

int main()
{
        int x=0x22887723;
	char *p;
	p=(char *)&x;


	if(*p==0x23)
		printf("%x stored in little endian machine\n",x);
	else
		printf("%x stored in big endian machine\n",x);

/*	for(int i=0;i<4;i++)
		printf("p[%d]= %x\n",i,p[i]);*/


	return 0;
}
