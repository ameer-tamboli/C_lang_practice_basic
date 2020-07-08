#include<stdio.h>

int main()
{
	int count0=0,count1=0,i=0,a=0;
	char binstr[20];
	printf("Enter a binary code to check:\n");
	scanf("%s",binstr);
	while(binstr[i]!='\0')
	{
		if(binstr[i]=='0')
			count0++;
		else if(binstr[i]=='1')
			count1++;
		else
		{
			printf("Invalid binary\n");
			a=1;
			break;
		}
		i++;
	}
	if(a!=1)
		printf("Number of 1s=%d and 0s=%d in the given binary code\n",count1,count0);
	return 0;

}



