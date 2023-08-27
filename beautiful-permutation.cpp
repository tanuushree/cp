#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, i;
    cin>> n;
    if(n>1 && n<=3){
        cout << "NO SOLUTION";
    }
    else{
        for(i=2;i<=n;i+=2){
            cout << i <<" ";
        }
        for(i=1;i<=n;i+=2){
            cout<<i<<" ";
        }
    }
    
      
}