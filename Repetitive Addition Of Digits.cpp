 /*
https://practice.geeksforgeeks.org/problems/repetitive-addition-of-digits/0
Repetitive Addition Of Digits
*/

   #include<iostream>
    using namespace std;
    int main()
     {
     ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    	int t;
    	cin>>t;
    	while(t--){
    	  long long int n;
    	  cin>>n;
    	  if(n==0){
    	      cout<<"0"<<endl;
    	  }
    	  else{
    	      if(n%9==0){
    	          cout<<"9"<<endl;
    	      }
    	      else{
    	          cout<<n%9<<endl;
    	      }
    	  }
    	}
    	return 0;
    }



#include <iostream>
using namespace std;

int main() {
 int testcases;
 cin>>testcases;
    
    
 for(int j=0 ; j<testcases;j++)
 {
     int num;
     cin>>num;
     
     if(num<10)
      {
          cout<<num<<endl;
          
      }
     else{
    
         int sum=0;
         while(num>0 || sum>9)
         {
             if(num==0)
             {
                 num=sum;
                 sum=0;
                 
             }
             
             sum+=num%10;
             num=num/10;
         }
        
       cout<<sum<<endl;
     
     }
    
     
 }
	return 0;
}
