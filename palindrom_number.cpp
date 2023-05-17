class Solution {
public:
    bool isPalindrome(int x) {
        bool flag=false;
        long prev;
        long rev=0;
        long rem;
        prev=long(x);
        if(x<0){
            return flag;
        }
        while(x!=0){
            rem=x%10;
            rev=rev*10 + rem;
            x=x/10;
        }

        if (prev==rev){
            flag=true;
        }
       
        
        
        return flag;
    }
};
