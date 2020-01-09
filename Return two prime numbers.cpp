/*
Return two prime numbers
https://practice.geeksforgeeks.org/problems/return-two-prime-numbers/0/
*/	
//using prime table
#include <bits/stdc++.h>
using namespace std;

bool is_prime( int n )
{
    if( n<=1 )
    {
        return false;
    }
    
    for( int i=2 ; i<(n/2)+1 ; i++ )
    {
        if((n%i)==0)
         return false;
        
    }
    return true;
}


int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int p,temp;
	    cin>>p;
	   vector<int> prime_numbers;
	    for( int i=2 ; i<p ; i++ )
	    {
	        if(is_prime(i))
	        {
	            prime_numbers.push_back(i);
	          
	        }
	    }
	   /* for( int i=0 ; i<prime_numbers.size() ; i++ )
	    {
	       cout<<prime_numbers[i]<<" ";
	    }*/
	    
	    
	       for( int i=0 ; i<prime_numbers.size() ; i++ )
	       {
	           temp=p-prime_numbers[i];
	           if(is_prime(temp))
	           {
	               cout<<prime_numbers[i]<<" "<<temp;
	               break;
	           }
	           
	       }
	        
	    
	   cout<<endl;
	}
	
	return 0;
}

//using no prime table
#include <bits/stdc++.h>
using namespace std;
bool is_prime( int n );
int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	    int p,temp;
	    cin>>p;
	  
	    for( int i=2 ; i<p ; i++ )
	    {
	        if(is_prime(i))
	        {
	           
	           temp=p-i;
	           if(is_prime(temp))
	           {
	               cout<<i<<" "<<temp;
	               break;
	           }
	        }
	    }
	   cout<<endl;
	}
	
	return 0;
}
bool is_prime( int n )
{
    if( n<=1 )
    {
        return false;
    }
    
    for( int i=2 ; i<(n/2)+1 ; i++ )
    {
        if((n%i)==0)
         return false;
        
    }
    return true;
}
