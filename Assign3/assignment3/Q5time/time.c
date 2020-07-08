#include<stdio.h>

int main()
{
	int hour, min, sec;
	int choice=0,total=0,a=0,b=0,c=0;
	printf("Enter a choice:\t1.To Calculate time from total seconds.\t2.Calculate total seconds from given time.");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1 :printf("enter the total time in sec :\n ");
		        scanf("%d",&a);
		        b=a%3600;
		        a=a-b;
		        hour=a/3600;
		        c=b%60;
		        b=b-c;
		        min=b/60;
		        sec=c;
		        printf("the resultant time is %d:%d:%d \n",hour,min,sec);
		        break;	

		case 2 : printf("Enter time in hh:mm:ss ->");
			 scanf("%d:%d:%d",&hour,&min,&sec);
			 if(hour<24)
			 {
				   hour=hour*3600;
				   if(min<60)
				   {
					min=min*60;
					if(sec<60)
					{
						total=hour+min+sec;
					        printf("Total time in seconds=>%d\n",total);
					}
					else 
					        printf("Invalid second entry!should be less than 60\n ");
				   }
				   else
					printf("Invalid minute entry!should be less than 60\n");
			}
			 else
				 printf("Invalid hour entry!should be less than 24\n");
			 break;
		default: printf("Invalid choice\n");
	}
	return 0;
}


