//*entering to the main function *//
#include<stdio.h>
#include<stdlib.h>
#include"linkedlisth"
void main()
{
      int choice;
      extern int len_gth;
	  while(1) //*infinite loop*//
	  {
	  printf("1:add_at_begin:\n2:add_at_end:\n3:display:\n4:delete_at_begin:\n5:delete_att_end:\n6:delete_at_any:\n7:length:\n8:add_at_any:\n");
	  printf("enter the choice:");
	  scanf("%d",&choice);   //*enter the choice *//
	  switch(choice)
	  {
		  case 1:
			  add_at_begin(); //*calling add at begin function*//
			  break;
		  case 2:
			  add_at_end();    //*calling add at the end function*//
			  break;
	          case 3:
			  display();       //displaying the function *//
			  break;
	          case 4:
			  delete_at_begin();   //calling deleteing a node at begining function *//
			  break;
	          case 5:
			  delete_at_end();     //calling delete at a end of the node function *//
			  break;
		  case 6:
			  delete_at_any();      //*calling deleting a node at any location function *// 
			  break;
	          case 7:
              len_gth=length();              //*calling the length function to find the length  *//
			  printf("\nlengthis:%d\n",len_gth);
			  break;
		  case 8:
			  add_at_any();       //*calling add at any node int hte list function *//
			  break;
		  default:
			  printf("entered choice is invalid please enter the valid choice");
	  }
	  }

}

