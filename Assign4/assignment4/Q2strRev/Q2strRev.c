#include<stdio.h>

int main()
{
	int i=0,len,count=0,k=0,m=0;
	char str[30],str1[30];
	printf("Enter a String to reverse..\n");
        scanf("%s",str);
	printf("Original String..");
        while(str[i]!='\0')
	{	
		printf("%c",str[i]);
		i++;
	}
	len=i;
	printf("\nlen=%d",len);
//	printf("\nReversed String is..");
        int j=len-1;	
	while(j>=0)
	{ 
	    str1[k++]=str[j];
	    --j;
	}
	str1[k]='\0';
	printf("\nReversed String is..%s",str1);

	while(str1[m]!='\0')
	{
		if(str1[m]==str[m])		  
		     count++;
		else 
		     count=0;
		m++;
	}
	printf("\nlen=%d,count=%d\n",len,count);
	if(count==len)
		printf("\nThe string is pallindrome\n");
	else    
		printf("The string is not a pallindrome\n");



	return 0;
}

