#include<stdio.h>

struct student
{
	char name[20];
	int  rollno;
	struct date
	{
		int date;
		int month;
		int year;
	}bday;
};


int main(void)
{
	struct student stu1;
	printf("Enter name of student:\n");
	scanf("%s",stu1.name);
	printf("Enter roll number of student\n");
	scanf("%d",&stu1.rollno);
	printf("Enter DOB in the format[DD/MM/YYYY] of student:\n");
	scanf("%d/%d/%d",&stu1.bday.date,&stu1.bday.month,&stu1.bday.year);
	printf("\nThe record entered is: \nName:%s\nRN:%d\n",stu1.name,stu1.rollno);
	printf("DOB of student:%d/%d/%d\n",stu1.bday.date,stu1.bday.month,stu1.bday.year);

}
