/*
Implement Stack using Linked List 
https://practice.geeksforgeeks.org/problems/implement-stack-using-linked-list/1

*/

void MyStack ::push(int x) {
    StackNode *temp=new StackNode(x);
    
    temp->next=top;
    top=temp;
}
/* The method pop which return the element
  poped out of the stack*/
int MyStack ::pop() {
    // Your Code
    if(top==NULL)return -1;
    int r=top->data;
    top=top->next;
    return r;
}
