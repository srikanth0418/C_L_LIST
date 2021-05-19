#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void add_at_any()
{
	extern l_list *head,*temp,*temp1;
	uint32_t i=0,location,num1;
	extern uint32_t len_gth;
	printf("enter the location:\n");
	scanf("%d",&location);
	len_gth=length();
    if(head==NULL)
	{
	    //*if head is equal to null then list is empty*//
		printf("list is empty\n");
	}
	else if(location==1)
	{
		//*if location is zero the begin node will added*//
		add_at_begin();
	}
	else if(location<len_gth-1)   //*if the location is less then length then add a node at specified location*//
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:\n");
		scanf("%d",&num1);
		temp->data=num1;
		temp1=head;
		while(i<location-1)      //*traverse throgu the specified location using while loop*//
		{
			temp1=temp1->next;
			i++;
		}
	}
		temp->next=temp1->next;
		temp1->next=temp;
}
