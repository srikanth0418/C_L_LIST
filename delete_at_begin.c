#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void delete_at_begin()
{
   extern struct node *head;
	 extern struct node *temp;
	if(head==NULL)
	{
		printf("given node is empty\n");
	}
	else
	{
		temp=head;
		while(temp->next!=head)
		{
			temp=temp->next;
		}
		temp->next=head->next;
		head=NULL;
		free(head);
		head=temp->next;
	}
}
