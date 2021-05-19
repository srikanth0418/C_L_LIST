//*given function is loop throgh the all the nodes *//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlist.h"
void display()
{
    extern l_list *head;
	extern l_list *temp;
	temp=head;
	if(head==NULL)
	{
		printf("given nodes are empty\n");
	}
	else
	{
		while(temp!=head)
		{
			printf("%d",temp->data);
			temp=temp->next;
		}
	}
	printf("%d\n",temp->data);
}
