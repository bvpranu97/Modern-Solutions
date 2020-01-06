
/*
Evaluation of Postfix Expression
https://practice.geeksforgeeks.org/problems/evaluation-of-postfix-expression/0
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
    int testcases;
    cin>>testcases;
    while( testcases-- )
    {
        string expn;
        cin>>expn;
        stack<int> st;
       
        for( int i=0 ; i<expn.size() ;i++ )
        {
            
            if( isdigit(expn[i])  )
            {
                st.push(expn[i]-'0');
            }
            else
            {   
                int a=st.top();
                st.pop();
                int b=st.top();
                st.pop();
                
                switch(expn[i])
                {
                    case '+':
                     st.push(a+b);
                     break;
                     case '-':
                     st.push(b-a);
                     break;
                     case '*':
                     st.push(a*b);
                     break;
                     case '/':{
                     int temp=(int)b/a;
                     st.push(temp);}
                     break;
                }
                
                
            }
        }
        
        
        cout<<st.top()<<endl;
        
    }

	return 0;
}
