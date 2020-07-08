#include<stdio.h>

int main()
{
	int a[5]={10,20,30,40,50};
	int *p=a;
	int *q=*(&a+1)-1;
	printf("\t*p++:=%d\n",*p++);
	printf("\t*++p:=%d\n",*++p);
	printf("\t(*p)++:=%d\n",(*p)++);
	printf("\t++(*p):=%d\n",++(*p));
	printf("\t++*p:=%d\n",++*p);
	printf("\t*(p++):=%d\n",*(p++));
	printf("\t*(++p):=%d\n",*(++p));
	printf("\t*q--:=%d\n",*q--);
	printf("\t*--q:=%d\n",*--q);
	printf("\t--(*q):=%d\n",--(*q));
	printf("\t--*q:=%d\n",--*q);
	printf("\t(*q)--:=%d\n",(*q)--);
	printf("\t*(q--):=%d\n",*(q--));
	printf("\t*(--q):=%d\n",*(--q));
	for(int i=0;i<5;i++)
		printf("%d,",a[i]);

	return 0;
}
