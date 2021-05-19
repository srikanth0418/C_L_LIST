//*header file*//
#ifndef HEADER_H
#define HEADER_H
uint32_t len_gth;
uint32_t count;;
typedef struct node
{
    int data;
    struct node *next;
}l_list; 
l_list *head,*temp,*temp1;
#include<stdlib.h>
void add_at_begin();
void add_at_end();
void display();
void add_at_any();
void delete_at_begin();
void delete_at_any();
void delete_at_end();
uint32_t length();
#endif

