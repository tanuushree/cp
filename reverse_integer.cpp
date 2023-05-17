#include <iostream>
using namespace std;

class Solution {
public:
    int reverse(int x) {
         bool flag = false;
         if(x==-2147483648) return 0;
        if (x < 0)
        {
            flag = true;
            x = -x ;
        }
    
        long prev = 0, rev = 0;
        while (x != 0)
        {
            int rem = x % 10;
    
            rev = (rev * 10) + rem;
    
            prev = rev;
            x = x / 10;
        }
        if(rev>INT_MAX||rev<INT_MIN){
            return 0;
        }
    
        return (flag == true) ?
                            -rev : rev;
            
            
        
    }         
       
    
};
