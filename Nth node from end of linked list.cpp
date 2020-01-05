/*

Nth node from end of linked list 
https://practice.geeksforgeeks.org/problems/nth-node-from-end-of-linked-list/1/
*/

int getNthFromLast(Node *head, int n)
{
   /* stack<Node*> s;
    Node *temp=head;
    while( temp )
    {
        s.push(temp);
        temp=temp->next;
    }
    while( n!=1)
    {
        if(!s.empty())
        s.pop();
        else return -1;
        n--;
    }
    return s.top()->data;
      */
      if(head==NULL )return -1;
      Node *item,*temp;
      item=temp=head;
      while( n-- )
      {
          
          if(temp==NULL && n!=0)return -1;
          temp=temp->next;
      }
      if(temp==NULL)
      return item->data;
     while(temp)
     {
         temp=temp->next;
         item=item->next;
     }
    // if(item==NULL)return -1;
     return item->data;
}

