//*delete a the beging of the node*//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void delete_at_begin()
{
   extern l_list *head;
	 extern l_list *temp;
	if(head==NULL)
	{
		printf("given node is empty\n");
	}
	else
	{
		temp=head;
		while(temp->next!=head) //*travers to the last node to find the head node*//
		{
			temp=temp->next;
		}
		temp->next=head->next;
		head=NULL;
		free(head);
		head=temp->next;
	}
}
