//*finding the length of the list *//
#include<stdio.h>
#include"linkdelist.h"
#include<stdlib.h>
uint32_t length()
{
	extern l_list *head,*temp;
	extern uint32_t count=0;
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

