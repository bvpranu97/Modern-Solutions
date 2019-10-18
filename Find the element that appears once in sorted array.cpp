
/*
BY: Coding Cat
Domain : Illegal Coding bolongs to stl illegal
Link: https://practice.geeksforgeeks.org/problems/find-the-element-that-appears-once-in-sorted-array/0
Name: Find the element that appears once in sorted array  
*/


#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
    cin>>testcases;
    
    for( int test=0 ; test<testcases ; test++ )
    {
      int n,temp,size;
      map<int,int> m;
      vector<int> v;
      cin>>n;
      
      for( int i=0 ; i<n ; i++ )
      {
          cin>>temp;
          v.push_back(temp);
      } 
      for( int i=0 ; i<n ; i++ )
      {
          m[i]=0;
      }
       for( int i=0 ; i<n ; i++ )
      {
          m[v[i]]=m[v[i]]+1;
      }
      for( auto  i : m )
      {
          if( i.second==1 )
          {
              cout<<i.first<<endl;
              break;
          }
      }
    }
	return 0;
}
