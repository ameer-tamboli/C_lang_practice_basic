#include<stdio.h>
#include<stdlib.h>

#define refyear 2019
#define size 3
struct employee{
	int empID;
	char name[10];
	int salary;
	int yoj;
};
struct employee emp[size]={0};

void emprecord(int);
void disprec(int);
void salinfo(void);
void serviceinfo(void);
int main(void)
{
	int ch=0,num=0;
	while(1)
	{
		printf("\t-------Employee Record--------\n");
		printf("\t1.Insert Employee record\t2.SalInfo\t3.ServiceInfo\n");
		printf("\t4.Displayrecord\t5.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1: printf("How many Employee records to enter\n");
				scanf("%d",&num);
				emprecord(num);
				break; 
			case 2: salinfo();
				break;
			case 4: printf("Enter No. of Records to display\n");
				scanf("%d",&num);
				disprec(num);
				break;
			case 3: serviceinfo();
				break;
			case 5: exit(0);
			default: printf("\nInvalid choice\n");
		}
	}
	return 0;
}

void emprecord(int num)
{
     if(num<=5){
	for(int i=0;i<num;i++)
	{
		printf("\nEnter Employee ID:");
		scanf("%d",&(emp[i].empID));
		printf("\nEnter Name of the employee:");
		scanf("%s",emp[i].name);
		printf("\nEnter Salary of the employee:");
		scanf("%d",&(emp[i].salary));
		printf("\nEnter joining year of the employee:");
		scanf("%d",&(emp[i].yoj));
	}
     }
     else
	     printf("Record full\n");
}

void disprec(int num)
{
	printf("\n--------------------Record Display -----------------\n");
	for(int i=0;i<num;i++)
	{
		printf("\nEmployee ID[%d]:%d\n",i,emp[i].empID);
		printf("\nName of the employee[%d]:%s\n",i,emp[i].name);
		printf("\nSalary of the employee[%d]:%d\n",i,emp[i].salary);
		printf("\nJoining year of the employee[%d]:%d\n",i,emp[i].yoj);
	}
}

void salinfo(void)
{
	int total=0,avg=0,max=0,min=0,count=0;
	max=emp[0].salary;
	min=emp[0].salary;
       for(int i=0;i<size;i++)
       {
	    if(emp[i].salary!=0){
	       total+=emp[i].salary;
	       if(emp[i].salary>max)
		       max=emp[i].salary;
	       if(min>emp[i].salary)
		       min=emp[i].salary;
	       count++;
	    }
       }
       avg=total/count;
       printf("\nTotal salary of employees:%d\n",total);
       printf("\nAverage salary of employees:%d\n",avg);
       printf("\nMaximum Salary:%d\n",max);
       printf("\nMinimum salary:%d\n",min);

}

void serviceinfo(void)
{
	int service[size]={0},max=0,min=0,a=0,b=0;
	max=service[0];
	min=service[0];
	for(int i=0;i<size;i++)
	{
		if(emp[i].yoj !=0)
		{
			service[i]=refyear-emp[i].yoj;
		}
	}
	for(int j=0;j<size;j++)
	{		
		if(service[j]>max)
               	{       a=j;
                        max=service[j];
                }
                if(min>service[j])
                {
                        b=j;
                        min=service[j];
                }
        }
        printf("Employee with maximum service\n\t-->Employee ID:%d\n\t-->Name:%s\n",emp[a].empID,emp[a].name);
        printf("Employee with minimum service\n\t-->Employee ID:%d\n\t-->Name:%s\n",emp[b].empID,emp[b].name);
}
