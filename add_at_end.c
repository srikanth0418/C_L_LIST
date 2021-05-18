//*adding at end of the node function*//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void add_at_end()
{
	int num1;
	extern struct node *head;
	extern struct node *temp,*temp1;
	temp1=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&num1);    //*enter the data what we have to store in node*//
	temp1->data=num1;
	if(head==NULL)
	{
		head=temp1;
		temp1->next=head;
	}
	else
	{
		temp=head;
		while(temp->next!=head)   //*travers the node untill last node come then add at the end *//
		{
			temp=temp->next;
		}
		temp->next=temp1;
		temp1->next=head;
	}
}

