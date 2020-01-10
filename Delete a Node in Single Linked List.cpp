/*
Delete a Node in Single Linked List
https://practice.geeksforgeeks.org/problems/delete-a-node-in-single-linked-list/1/
*/


Node* deleteNode(Node *head,int x)
{
    Node *temp=head;
    if(x==1)
    {
        head=head->next;
        return head;
    }
    for( int i=1 ; i<x-1 ; i++ )
    {
        temp=temp->next;
        if(temp==NULL)
          return head;
    }
    temp->next=(temp->next)->next;
    return head;
    
}

