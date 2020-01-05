/*1. Convert an array to reduced form linkhttps://practice.geeksforgeeks.org/problems/convert-an-array-to-reduced-form/0*/
#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
	cin>>testcases;
	while( testcases-- )
	{
	    vector<int> v1,v2;
	    unordered_map<int,int> m;
	    int temp, n;
	    cin>>n;
	    for( int i=0 ; i<n ; i++ )
	    {
	        cin>>temp;
	        v1.push_back(temp);
	        v2.push_back(temp);
	    }
	    sort(v1.begin(),v1.end());
	    for( int i=0 ; i<v1.size() ;  i++ )
	    {
	        m[v1[i]]=i;
	    }
	    for( auto i:v2 )
	    {
	        cout<<m[i]<<" ";
	    }
	    cout<<endl;
	}
	return 0;
}
