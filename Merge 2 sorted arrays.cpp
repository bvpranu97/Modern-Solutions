/*
By Pranav Shastri
Desc: This is illegal coding. DO not follow this approach

*/

#include <bits/stdc++.h>
using namespace std;

int main() {
 int test_cases;
  cin>>test_cases;
  for ( int t=0 ; t<test_cases ; t++ )
  {
     int n,m,temp=0;
     cin>>n>>m;
     vector<int> v;
     for( int i=0;i<n;i++ )
       {
           cin>>temp;
           v.push_back(temp);
       }
     for( int i=0;i<m;i++ )
       {
           cin>>temp;
           v.push_back(temp);
       }
     sort(v.begin(),v.end());
     for( int i=0;i<v.size();i++ )
      cout<<v[i]<<" ";
     cout<<endl;
  }
  
	return 0;
}
