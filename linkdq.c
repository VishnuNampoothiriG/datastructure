#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node
{
	 int data;
	 struct node *next;
};
	struct node *head;
	
void enqueue()
{
	struct node *newnode,*temp;
	newnode=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&newnode->data);
	newnode->next=NULL;
	if(head==NULL)
	{
		head=newnode;
	}
	else
	{
		temp=head;
		while(temp->next!=NULL)
		{
			temp=temp->next;
		}
		temp->next=newnode;
		
	}
}
void dequeue()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("queue is empty");
	}
	else
	{
		temp=head;
		head=head->next;
		printf("element deleted is:%d",temp->data);
		free(temp);
	}
}
void display()
{
	struct node *temp;
	if(head==NULL)
	{
		printf("no elements to display");
	}
	else
	{
		temp=head;
		while(temp!=NULL)
		{
			printf("elements are:\n%d",temp->data);
			temp=temp->next;
		}
	}
	
}
void main()
{
	int choice=0;
	printf("1.enqueue\n2.dequeue\n3.display\n4.exit");
	do
	{
		printf("enter choice:");
		scanf("%d",&choice);
		switch(choice)
		{
			case 1:
					enqueue();
					break;
			case 2:
					dequeue();
					break;
			case 3: 
					display();
					break;
			case 4:
					printf("exiting..");
					break;
			default:
					printf("enter valid choice");
			
		}
	}
	while(choice!=4);
}

