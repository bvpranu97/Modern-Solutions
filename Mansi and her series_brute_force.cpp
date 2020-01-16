/*
Mansi and her series 
https://practice.geeksforgeeks.org/problems/mansi-and-her-series/0
*/
#include <bits/stdc++.h>
using namespace std;
bool is_prime(int n);
int main() {
    int gfg;
    cin>>gfg;
    
    while(gfg--)
    {
        int num,count=0;
        cin>>num;
        if(num==0)
        {
            cout<<"0"<<endl;
            continue;
        }
        if(num==1)
        {
            cout<<"3"<<endl;
            continue;
        }
        int p=1;
        count=1;
        while(count<=num)
        {
            p++;
            if( is_prime(p) )
            {
                ++count;
                
            }
            
            
        }
        cout<<(p*num)+num<<endl;
      
       
    }
	
	
	return 0;
}
bool is_prime(int n)
{
    if(n==2)return true;
    for( int i=2 ; i<(n/2)+1  ; i++ )
    {
        if((n%i)==0)
         return false;
    }
    return true;
}
