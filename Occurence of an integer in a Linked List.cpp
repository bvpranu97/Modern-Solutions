/*
Recursive solution.
Occurence of an integer in a Linked List 
https://practice.geeksforgeeks.org/problems/occurence-of-an-integer-in-a-linked-list/1/
*/


int count(struct node* head, int search_for)
{
    if(head==NULL)return 0;
 if( head->data == search_for )
 {
     return 1+count(head->next,search_for);
 }
 else
 {
     return 0+count(head->next,search_for);
 }
}
