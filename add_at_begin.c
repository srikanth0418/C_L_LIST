//*adding at begining of the node function*//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void add_at_begin()
{
	uint32_t num1;
        extern l_list *head,*temp,*temp1;
	temp=(struct node*)malloc(sizeof(struct node));
	printf("enter the data:");
	scanf("%d",&num1);   //*enter the storing data*//
	temp->data=num1;
	if(head==NULL)
	{
		//*if head is equal to null then the new node is initialized*//
		head=temp;
		temp->next=head;
	}
	else
	{
		temp1=head;
		while(temp1->next!=head)  //*travers untill last node*//
		{
			temp1=temp1->next;
		}
		temp->next=head;
		temp1->next=temp;
		head=temp;
	}
}
