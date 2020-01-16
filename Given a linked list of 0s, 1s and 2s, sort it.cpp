/*
https://practice.geeksforgeeks.org/problems/given-a-linked-list-of-0s-1s-and-2s-sort-it/1
Given a linked list of 0s, 1s and 2s, sort it.
*/

/*
  Sort the list of 0's,1's and 2's
  The input list will have at least one element
  Node is defined as
  struct Node {
    int data;
    struct Node *next;
    Node(int x) {
        data = x;
        next = NULL;
    }
};

*/

// This function is to segregate the elememtns in the linked list
// This will do the required arrangement by changing the links
Node* segregate(Node *head) {
    
    int zero,one,two;
    zero=one=two=0;
    Node *temp=head;
    while( temp )
    {
        switch(temp->data)
        {
            case 0: zero++;
            break;
            case 1 : one++;
            break;
            case 2: two++;
            break;
        }
        temp=temp->next;
    }
    temp=head;
    for( int i=0 ; i<zero ; i++ )
    {
        temp->data=0;
        temp=temp->next;
    }
    for( int i=0 ; i<one ; i++ )
    {
        temp->data=1;
        temp=temp->next;
    }
    for( int i=0 ; i<two ; i++ )
    {
        temp->data=2;
        temp=temp->next;
    }
    return head;
    
}

