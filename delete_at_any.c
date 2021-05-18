#include<stdio.h>
#include<stdlib.h>
#include"header.h"
void delete_at_any()
{
	extern struct node *head,*temp,*temp1;
	int location,i=1;
	extern int num2;
	printf("enter the location:\n");
	scanf("%d",&location);
	num2=length();
	if(head=NULL)
	{
		printf("given blist is empty\n");
	}
	else if(location==0)
	{
		delete_at_begin();
	}
	else if(location<num2-1)
	{
		temp=head;
		while(i<location)
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



