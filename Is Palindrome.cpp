/*
BY: Coding Cat
Domain : Illegal Coding
Link:https://www.hackerrank.com/contests/doyoulikeit/challenges/doyoulikeit/submissions/code/1316765965
*/

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    string line, temp,temp2;
    getline(cin,line);
    for( int i=0 ; i<line.size() ; i++ )
    {
        if( line[i]>='a' && line[i]<='z' )
            temp+=tolower(line[i]);
    }
    temp2=temp;
    reverse(temp2.begin(),temp2.end());
    if(temp==temp2)
    {
        cout<<"YES";
        return 0;
    }
    else
    {
        cout<<"NO";
    }
        
    
    return 0;
}

