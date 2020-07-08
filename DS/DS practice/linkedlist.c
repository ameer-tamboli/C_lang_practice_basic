#include<stdio.h>
#include<stdlib.h>

struct node{
	int x;
	struct node *next;
};


void insertAtbeg(int **,int);
void insertAtpos(int **,int,int);
void insertAtend(int **,int);
void displaylist(int *);
void delAtbeg(int **);	
void delAtpos(int **,int);
void delAtend(int **);
int main()
{
	int ch,val=0;
	int pos;
	struct node *head=NULL;
	while(1){
		printf("\nEnter choice for linked list representation\n");
		printf("1.insertAtbeg\t2.insertAtpos\t3.insertAtend\t\n");
		printf("4.delAtbeg\t5.deltAtpos\t6.delAtend\t7.Displaylist\t8.Exit\n");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: printf("Enter the value\n");
			scanf("%d",&val);
			insertAtbeg(&head,val);
			break; 
		case 2: printf("Enter the value to insert\n");
			scanf("%d",&val);
			printf("Enter the position where to insert\n");
			scanf("%d",&pos);
			insertAtpos(&head,val,pos);
			break; 
		case 3: printf("Enter the value\n");
			scanf("%d",&val);
			insertAtend(&head,val);
			break;
		case 4: delAtbeg(&head);
                        break;
		case 7: displaylist(head);
			break;
		case 8: exit(0);

		}
	}
	return 0;
}

void displaylist(int *p)
{
	struct node *temp;
	temp=p;
	while(temp!=NULL)
	{
		printf("-->%d",temp->x);
		temp=temp->next;
	}	
}
void insertAtbeg(int **p,int data)
{
	struct node *temp;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->x=data;
	temp->next=NULL;
	if(*p==NULL)
	{
		*p=temp;
		 return;
	}
	else{
		temp->next=*p;
		*p=temp;
	}
}

void insertAtpos(int **p,int data,int pos)
{
        struct node *temp;
        struct node *t1;
        t1=*p;
        temp=(struct node*)malloc(sizeof(struct node));
        temp->x=data;
        temp->next=NULL;

        if(t1==NULL)
        {
                *p=temp;
                 return;
        }
        else
        {
		int i=1;
                while((i++)<(pos-1))
                {
			if(t1->next==NULL)
			{	printf("No node present at %d\n",pos);
				return;
			}
                        t1=t1->next;
                }
		temp->next=t1->next;
                t1->next=temp;
        }

}
void insertAtend(int **p,int data)
{
	struct node *temp;
	struct node *t1;
	t1=*p;
	temp=(struct node*)malloc(sizeof(struct node));
	temp->x=data;
	temp->next=NULL;
	
	if(t1==NULL)
	{
		*p=temp;
		 return;
	}
	else
	{
		while(t1->next!=NULL)
		{
			t1=t1->next;
		}
		t1->next=temp;
	}	

}

void delAtbeg(int **p)
{
        struct node *t1;
	t1=*p;
	if(*p==NULL)
	{
		printf("no node available in list");
		return 0;
	}
	*p=t1->next;
	free(t1);
		
}

