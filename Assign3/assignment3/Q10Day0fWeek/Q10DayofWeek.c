#include<stdio.h>

int leapyear(int,int);
int monthcal(int,int,int);

int main()
{
	int year,month,date,day,refyear,refdate,refday,refmonth,oddday,res,dir,rem,sum,diffy,diffd,lcount;
	year=date=month=day=refyear=refmonth=refdate=refday=oddday=res=dir=rem=sum=diffy=diffd=lcount=0;
	printf("Enter date to calculate its day in \n");
	printf("Format[dd/mm/yyyy] :");
	scanf("%d/%d/%d",&date,&month,&year);
	printf("\nEnter ref date");
	printf("\nFormat[dd/mm/yyyy] :");
	scanf("%d/%d/%d",&refdate,&refmonth,&refyear);
	printf("\nenter the day, 1-Mon,2-Tue,3-wed,4-thu,5-fri,6-sat,7-sun: ");
	scanf("%d",&refday);
	if(year>refyear)
	{
		diffy=year-refyear;
		lcount=leapyear(refyear,year);
		dir=1;
	}
		
	else
	{
		diffy=refyear-year;
		lcount=leapyear(year,refyear);
	}
	oddday=monthcal(month,refmonth,year);
	if(date>refdate)
		diffd=date-refdate;
	else
		diffd=refdate-date;
	sum=lcount+diffy+diffd+oddday;
	rem=sum%7;
	//printf("\n rem=%d\n",rem);
	//printf("\n lcount=%d\n",lcount);
	//printf("\n diffy=%d\n",diffy);
	//printf("\n diffd=%d\n",diffd);
	//printf("\n oddday=%d\n",oddday);
	//printf("\n sum=%d\n",sum);
	//printf("\n dir=%d\n",dir);
	if(dir==1)
		res=rem+refday;
	else
		res=refday+(7-rem);
	if(res>7)
		res=res-7;

	switch(res)
	{
		case 1:printf("the day is Mon");
		       break;
		case 2:printf("the day is Tue");
		       break;
		case 3:printf("the day is Wed");
		       break;
		case 4:printf("the day is Thu");
		       break;
		case 5:printf("the day is Fri");
		       break;
		case 6:printf("the day is Sat");
		       break;
		case 7:printf("the day is Sun");
		       break;
	}
	return 0;
}


int leapyear(int y1,int y2)
{
	int i=0,count=0;
	for(i=y1;i<=y2;++i)
	{
		if(i%400==0||i%100!=0&&i%4==0)
			count++;
	}
	return count;
}

int monthcal(int m1,int m2,int y)
{
	int total=0,rem=0;
	for(int i=m1;i<m2;++i)
	{
		if(i==12)
		{
			i=1;
			++y;
		}
		else
		{
			switch(i)
			{
			case 1:rem=3;
			       break;
			case 2:if(y%400==0||y%100!=0&&y%4==0)
				       rem=1;
			       else
				       rem=0;
			       break;
			case 3:rem=3;
			       break;
			case 4:rem=2;
			       break;
			case 5:rem=3;
			       break;
			case 6:rem=2;
			       break;
			case 7:rem=3;
			       break;
			case 8:rem=3;
			       break;
			case 9:rem=2;
			       break;
			case 10:rem=3;
			       break;
			case 11:rem=2;
			       break;
			case 12:rem=3;
				break;
			}
		}
		total=total+rem;
	}
	return total;
}


			     


	

