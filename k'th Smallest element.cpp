#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	for( int te=0;te<t;te++ )
	{
	    int n,k,max=0;
	    cin>>n;
	    int a[n];
	    for( int i=0 ; i<n ; i++ ){
	     cin>>a[i];
	      if( max<a[i] )
	       max=a[i];
	    }
	    bool tracker[max+1];
	    for( int i=0 ; i<=max ; i++ )
	    {
	        tracker[i]=false;
	    }
	    for ( int i=0 ; i<n ; i++)
	    {
	        tracker[a[i]]=true;
	    }
	     int smallest=0;
	     for( int i=1 ; i<=max ; i++)
	     {
	         if( tracker[i] )
	          smallest++;
	         if( smallest == k )
	          break;
	     }
	    cout<<smallest<<endl;
	}
	
	return 0;
}
