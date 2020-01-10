/*
Linked List Insertion 
https://practice.geeksforgeeks.org/problems/linked-list-insertion/1/

*/


Node *insertAtBegining(Node *head, int newData) {
   // Your code here
   Node *n=new Node(newData);
   n->next=head;
   return n;
}


// function appends the data at the end of the list
Node *insertAtEnd(Node *head, int newData)  {
    if(head==NULL)
     return new Node(newData);
   Node *temp=head;
   Node *n=new Node(newData);
   while(  temp->next )
   {
       temp=temp->next;
   }
   temp->next=n;
   return head;
}

