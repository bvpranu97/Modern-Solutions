/*
Reverse a string using Stack
https://practice.geeksforgeeks.org/problems/reverse-a-string-using-stack/1
*/
//using stack
void reverse(char *str, int len)
{
 stack<char> st;
 for( int i=0 ; i<len ; i++ )
  st.push(str[i]);
 for( int i=0 ; i<len ; i++ )
  {
      str[i]=st.top();
      st.pop();
  }
}

//using swapping method
void reverse(char *str, int len)
{
    char temp;
 for( int i=0,j=len-1; i<len/2 ; i++,j-- )
 {
     temp=str[i];
     str[i]=str[j];
     str[j]=temp;
 }
}
