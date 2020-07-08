#include<stdio.h>

int main()
{
	int a,b,count=0;
	printf("Enter the no. upto which display prime numbers \n");
	scanf("%d",&a);
	for(int j=1;j<=a;j++){
		for(int i=1;i<=(j/2);i++){
			if(j%i==0)
		   	  count++;
		}
		if(count>1){
	//	printf("entered no %d is not a prime",a);
		      count=0;
		}
		else{
			printf("%d,",j);
			count=0;
		
		}
	}
	return 0;
}
