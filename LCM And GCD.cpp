/*
LCM And GCD 
https://practice.geeksforgeeks.org/problems/lcm-and-gcd/0

*/


#include <bits/stdc++.h>
using namespace std;
int find_gcd(int a, int b)
{
    if(a==0)
     return b;
   return find_gcd(b%a,a);
    
}
int main() {
	//code
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int testcases;
	cin>>testcases;
	while(testcases--)
	{
	  long long  int a,b;
	    cin>>a>>b;
	   long long int gcd=find_gcd(a,b);
	   long long int lcm=(a*b)/gcd;
	    cout<<lcm<<" "<<gcd<<endl;
	    
	}
	return 0;
}
