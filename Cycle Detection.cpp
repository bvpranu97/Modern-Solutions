
/*
BY: Coding Cat
Domain : Illegal Coding
Link: https://www.hackerrank.com/challenges/detect-whether-a-linked-list-contains-a-cycle/problem
*/



bool has_cycle(SinglyLinkedListNode* head) {

 SinglyLinkedListNode *slow=head, *fast=head;
 while( slow && fast && fast->next!=NULL )
 {
     slow=slow->next;
     fast=fast->next->next;
     if( slow==fast ) return true;
 }
return false;

}
