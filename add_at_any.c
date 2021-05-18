#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void add_at_any()
{
	 extern struct node *head,*temp,*temp1;
	int i=0,location,num1;
	extern int len_gth;
	printf("enter the location:\n");
	scanf("%d",&location);
	len_gth=length();
    if(head==NULL)
	{
		printf("list is empty\n");
	}
	else if(location==1)
	{
		add_at_begin();
	}
	else if(location<len_gth-1)
	{
		temp=(struct node*)malloc(sizeof(struct node));
		printf("enter the data:\n");
		scanf("%d",&num1);
		temp->data=num1;
		temp1=head;
		while(i<location-1)
		{
			temp1=temp1->next;
			i++;
		}
	}
		temp->next=temp1->next;
		temp1->next=temp;
}
