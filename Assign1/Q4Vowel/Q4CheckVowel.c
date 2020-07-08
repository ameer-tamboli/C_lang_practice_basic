#include<stdio.h>

int main()
{
	char a,b;
	int i;
	printf("enter the any char\n");
	scanf("%c",&a);
	i=a;
	if((a=='a'||a=='A')||(a=='e'||a=='E')||(a=='i'||a=='I')||(a=='o'||a=='O'	)||(a=='u'||a=='U'))
		printf(" %c is a vowel",a);
	else
	{
		if(i<=57&&i>=48)
			printf("entered char is a digit and not a vowel");
		else if((i>=65&&i<=90)||(i>=97&&i<=122))
			printf("entered char is not a vowel");
		else
			printf("entered is a special char and not a vowel");
	}

	return 0;
}

