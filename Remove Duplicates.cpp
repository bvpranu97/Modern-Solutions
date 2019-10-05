#include <iostream>
using namespace std;

int main() {
    int testcases;
	cin>>testcases;
	cin>>ws;
	for( int t=0 ; t<testcases ; t++ )
	{
	  string ip;
	  getline(cin,ip);
	  cin>>ws;
	  string op;
	  size_t found;
	  for( int i=0 ; i<ip.size() ; i++  )
	  {
	      found = op.find(ip[i]); 
	      if (found == string::npos) 
	        op+=ip[i];
	  }
	 cout<<op<<endl;
	}
	return 0;
}
