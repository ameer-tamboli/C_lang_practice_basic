

#include<stdio.h>

int disp[5];

void disparr();
void revarr();

int main()
{
        printf("Enter 5 Numbers to display & reverse display\n");
        disparr();
	/*for(int i=0;i<5;i++)
	{
	    scanf("%d",&disp[i]);
        }*/
	printf("The numbers in reverse order:");
	revarr();
        /*for(int j=4;j>=0;j--)
	{	
	    printf("%d,",disp[j]);
	}*/

}

void disparr()
{
     static int a=0;
	if(a<5)
	{
		scanf("%d",&disp[a]);
		disparr(++a);
	}
}

void revarr()
{
	static int b=4;
	if(b>=0)
	{
		printf("%d,",disp[b]);
		revarr(--b);
	}
}
