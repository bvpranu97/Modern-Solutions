
/*
BY: Coding Cat
Domain : Illegal Coding (Stack Approach)
Link: https://practice.geeksforgeeks.org/problems/check-if-linked-list-is-pallindrome/1
*/


bool isPalindrome(Node *head)
{
   stack<int> st;
   Node* temp=head;
   int t=0;
   while( temp  )
   {
       t=temp->data;
       st.push(t);
       if(temp->next==NULL)break;
       temp=temp->next;
   }
   temp=head;
   while( temp )
   {
       
       if( st.top() !=temp->data )
        return false;
       st.pop();
       if(temp->next==NULL)break;
       temp=temp->next;
   }
return true;
}

