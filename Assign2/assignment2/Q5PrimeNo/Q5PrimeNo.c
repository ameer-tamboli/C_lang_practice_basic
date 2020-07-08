#include<stdio.h>

int main()
{
	int a,b,count=0;
	printf("Enter the no to check for prime \n");
	scanf("%d",&a);
	for(int i=1;i<=(a/2);i++){
		if(a%i==0)
		   count++;
	}
	if(count>1){
		printf("entered no %d is not a prime",a);
		
	}
	else{
		printf("Entered no. %d is a prime",a);
		count =0;
		
	}
	return 0;
}

