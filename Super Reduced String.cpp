/*
BY: Coding Cat
Domain : Illegal Coding
Link: https://www.hackerrank.com/challenges/reduced-string/problem
*/

#include <bits/stdc++.h>

using namespace std;

// Complete the superReducedString function below.
string superReducedString(string s) {
 string final_string=s;
 
 for ( int i=1 ; i<final_string.size() ; i++ )
 {
     if( final_string[i] == final_string[i-1] )
     {
         final_string.erase(final_string.begin()+i);
         final_string.erase(final_string.begin()+(i-1));
         i=0;
     }
 }
 if( final_string.size()==0)
  final_string="Empty String";

 return final_string;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string s;
    getline(cin, s);

    string result = superReducedString(s);

    fout << result << "\n";

    fout.close();

    return 0;
}

