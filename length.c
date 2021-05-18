//*finding the length of the list *//
#include<stdio.h>
#include"linkdelist.h"
#include<stdlib.h>
int length()
{
	extern struct node *head,*temp;
	int count=1;
	if(head==NULL)
	{
		printf("given nodes are empty\n");
	}
	else
	{
	    temp=head;
		while(temp!=head)
		{
			temp=temp->next;
			count++;
		}
	}
	return count;  //*return to the count=len_gth *//
}

