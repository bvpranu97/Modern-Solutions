/*
https://practice.geeksforgeeks.org/problems/delete-node-in-doubly-linked-list/1/
Delete node in Doubly Linked List 
*/


// Function to delete the node at position x
void deleteNode(Node **head_ref, int x)
{
  //Your code here
  Node *temp = *head_ref;
  if( x==1 )
  {
      *head_ref=temp->next;
      return;
  }
  for( int i=1 ; i<x-1 ; i++ )
  {
      temp=temp->next;
  }
  
 if( !(temp->next)->next ==NULL  )
  {
      temp->next=(temp->next)->next;
  }
  else
  {
      temp->next=NULL;
      return;
  }
  (temp->next)->prev=temp;
}
