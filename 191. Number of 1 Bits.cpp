/*
191. Number of 1 Bits
https://leetcode.com/problems/number-of-1-bits/submissions/
*/


class Solution {
public:
    int hammingWeight(uint32_t n) {
        
     unsigned int count=0;
     bool c=false;
     for( int i=0 ; i<32 ; i++ )
     {
         c=( n& (1<<i) ); 
         if( c ) count++;
     }
        return count;
    }
};
