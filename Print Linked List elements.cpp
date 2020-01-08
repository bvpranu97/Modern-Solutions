/*
https://practice.geeksforgeeks.org/problems/print-linked-list-elements/1
Print Linked List elements 
*/


void display(Node *head)
{
  //your code goes here
  if(head==NULL)
    return;
    else 
    {
        cout<<head->data<<" ";
        display(head->next);
    }
}
