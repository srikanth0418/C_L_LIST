//*header file*//
#ifndef HEADER_H
#define HEADER_H
int len_gth;
struct node
{
    int data;
    struct node *next;
}*head,*temp,*temp1;
#include<stdlib.h>
void add_at_begin();
void add_at_end();
void display();
void add_at_any();
void delete_at_begin();
void delete_at_any();
void delete_at_end();
int length();
#endif

