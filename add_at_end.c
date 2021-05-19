//*adding at end of the node function*//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void add_at_end()
{
	uint32_t num1;
	extern l_list *head;
	extern l_list *temp,*temp1;
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

