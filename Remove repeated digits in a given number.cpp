
/*
Remove repeated digits in a given number 
https://practice.geeksforgeeks.org/problems/remove-repeated-digits-in-a-given-number/0
*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    string s;
	    cin>>s;
	    char c;
	    c=s[0];
	    cout<<c;
	    for( int i=1 ; i<s.size() ; i++ )
	    {
	        if( s[i]!=c )
	        {
	            c=s[i];
	            cout<<c;
	        }
	        
	    }
	    cout<<endl;
	}
	return 0;
}
