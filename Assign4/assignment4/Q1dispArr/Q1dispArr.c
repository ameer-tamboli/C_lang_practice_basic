
#include<stdio.h>

int main()
{
	int disp[6];
        printf("Enter 5 Numbers to display & reverse display\n");
        for(int i=0;i<5;i++)
	{
	    scanf("%d",&disp[i]);
        }
	printf("The numbers in reverse order:");
        for(int j=4;j>=0;j--)
	{	
	    printf("%d,",disp[j]);
	}

}

