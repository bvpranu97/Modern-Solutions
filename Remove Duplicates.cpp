/*
BY: Coding Cat
Domain : Illegal Coding belongs to stl illegal
Link: https://practice.geeksforgeeks.org/problems/remove-duplicates/0
*/

#include <bits/stdc++.h>
using namespace std;

int main() {
	int testcases;
	cin>>testcases;
	for( int test=0 ;test<testcases ; test++ )
	{
	 // unordered_map<char,int> m;
      string s;
      cin>>ws;
      getline(cin,s);
      vector<int> str(256,0);
      for( int i=0 ; i<s.size() ; i++  )
      {
          if( str[s[i]] == 0 )
          {
              cout<<s[i];
              str[s[i]]=1;
          }
      }
        
      cout<<endl;
	}
	return 0;
}
