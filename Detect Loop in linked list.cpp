/*Detect Loop in linked list 
https://practice.geeksforgeeks.org/problems/detect-loop-in-linked-list/1/

*/

int detectloop(Node *head) {
    
    Node *slow,*fast;
    slow=fast=head;
    while(  fast && fast->next  )
    {
        fast=fast->next;
        fast=fast->next;
        slow=slow->next;
        if( slow==fast )
         return 1;
    }
    return 0;
    
}

