//*delete a node at the end of the node *//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void delete_at_end()
{
	extern struct node *head,*temp,*temp1;
	if(head==NULL)
	{
		printf("given node is empty\n");
	}
	else if(head->next!=head) 
	{
		temp=head;
		while(temp->next!=head)   //*traverse to untill the last node*//
		{
			temp1=temp;
			temp=temp->next;
		}
		temp1->next=temp->next;
		free(temp);

	}
	else
        {
        head=NULL;
        free(head);
        }


}

