/*
BY: Coding Cat
Domain : Illegal Coding belongs to stl illegal
Link: https://practice.geeksforgeeks.org/problems/implement-strstr/1
*/


int strstr(string s, string x)
{
     auto it=s.find(x);
     return (int)it;  
}
