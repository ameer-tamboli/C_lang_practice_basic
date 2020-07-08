#include<stdio.h>
#include<stdio_ext.h>
#include<stdlib.h>

typedef struct student stut;

#define size 5
struct student
{
	char name[10];
	int rollno;
	int sub[5];
};

void studetails(struct student stu[]);
void accdetails(struct student stu[]);
void edit(struct student stu[]);
void marks(stut *);	

int main (void)
{
	int ch=0;
	struct student stu[5];
	stut *mks;
	mks=stu;
	while(1)
	{
		printf("\nchoose option 1.Enter student details 2.Access student details 3.Edit student details 4.Exit\n");
		printf("\nchoose option 5.Marks\n");
		scanf("%d",&ch);
		switch(ch)
		{
			case 1:studetails(stu);
			       break;
			case 2:accdetails(stu);
			       break;
			case 3:edit(stu);
			       break;
			case 5:marks(mks);
			case 4: exit(0);
		}
	

	}
	return 0;
}

void marks(stut *ptr)
{
	int subtotal=0,total=0;
	for(int i=0;i<5;i++)
	{
		printf("Total marks of student[%d]:",i);
		for(int j=0;j<size;j++)
		{
			total=total+((ptr+i)->sub[j]);
		}
		printf("-->%d\n",total);
		total=0;
	}
	for(int k=0;k<5;k++)
	{
		printf("\nTotal marks in subject [%d]:",k);
		for(int l=0;l<5;l++){
			subtotal=subtotal+((ptr+l)->sub[k]);
		}
		printf("-->%d\n",subtotal);
		subtotal;
	}

}

	


void studetails(struct student stu[])
{
	int i=0,j=0;
	for(i=0;i<5;i++)
	{
		printf("\n enter student name : ");
		scanf("%s",stu[i].name);
		printf("\n enter student roll no. : ");
		scanf("%d",&stu[i].rollno);
		printf("\n enter marks for sub  : ");
		for(j=0;j<5;j++)
		{
			printf("\n enter marks for sub   %d: ",j);
			__fpurge(stdin);
			scanf("%d",&stu[i].sub[j]);
		}
	}
}

void accdetails(struct student stu[])
{
	int i=0,j=0,a=0;
	printf("\n enter the roll no of the student to access details ");
	scanf("%d",&a);
	for(i=0;i<5;i++)
	{
		if(stu[i].rollno==a)
		{
			printf("\n student name is %s ",stu[i].name);
			for(j=0;j<5;j++)
				printf("\n marks in sub[%d] : %d ",j,stu[i].sub[j]);
		}
	}
}

void edit(struct student stu[])
{
	int i=0,j=0,a=0,b=0,c=0;
	printf("\n enter the roll no of the student to edit the details ");
	scanf("%d",&a);
        for(i=0;i<5;i++)
        {
                if(stu[i].rollno==a)
                {
                        printf("\n student name is %s ",stu[i].name);
			printf("\n choose detail to edit 1. name 2. marks ");
			scanf("%d",&b);
			switch(b)
			{
				case 1:printf("\n enter new name : ");
				       scanf("%s",stu[i].name);
				       break;
				case 2:printf("\n enter the sub no to edit marks ");
				       scanf("%d",&c);
				       for(j=0;j<5;j++)
				       {
					       if(stu[i].sub[j]==c)
					       {
						       printf("\n enter new marks for sub %d :",j);
						       scanf("%d",&stu[i].sub[j]);
					       }
				       }
				       break;
			}
                }
        }




}

