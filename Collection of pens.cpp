/*
Collection of pens
https://practice.geeksforgeeks.org/problems/collection-of-pens/0
*/

#include <bits/stdc++.h>
using namespace std;
bool is_prime( int n );
int main() {
	int gfg;
	cin>>gfg;
	while(gfg--)
	{
	    int A,B,C;
	    cin>>A>>B;
	    C=1;
	    while(true)
	    {
	       if( is_prime(A+B+C) )
	       {
	           cout<<C<<endl;
	           break;
	       }
	       C++;
	        
	    }
	}
	return 0;
}
bool is_prime( int n )
{
	if(n<=2)
		return false;
    for( int i=2 ; i<(n/2)+1 ; i++ )
    {
        if((n%i)==0)
        {
            return false;
        }
    }
    return true;
}
