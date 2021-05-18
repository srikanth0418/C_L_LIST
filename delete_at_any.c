//*delete a node at any location *//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void delete_at_any()
{
	extern struct node *head,*temp,*temp1;
	int location,i=1;
	extern int len_gth;
	printf("enter the location:\n");
	scanf("%d",&location);   //*enter the specified location for deleting a node *//
	len_gth=length();      //*finding the length *//
	if(head=NULL)
	{
		printf("given blist is empty\n");
	}
	else if(location==0)
	{
		delete_at_begin();
	}
	else if(location<len_gth-1)   //if location is more then length then condition is false//
	{
		temp=head;
		while(i<location)   //*traverse to the location where we want to delete a node //
		{
			temp1=temp;
			temp=temp->next;
			i++;
		}
		temp1->next=temp->next;
		free(temp);
	}
	else
	{
		printf("given location is invalid\n");
	}
}



