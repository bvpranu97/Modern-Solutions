/*
Linked List Length Even or Odd? 
https://practice.geeksforgeeks.org/problems/linked-list-length-even-or-odd/1
*/

int len( struct Node* n )
{
    if( n==NULL )
     {
         return 0;
     }
     else
     {
         return 1+len(n->next);
     }
}
// Function should return 0 is length is even else return 1
int isLengthEvenOrOdd(struct Node* head)
{
   int l=len(head);
   //cout<<l<<endl;
   int r;
    return l%2==0?0:1;
    /*int x=len(head);
    if( x%2 == 0 )
    {
        cout<<"Even"<<endl;
        return x;
    }
    else
    {
        cout<<"Odd"<<endl;
        return x;
    }*/
    
     
}

