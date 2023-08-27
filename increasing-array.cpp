#include <bits/stdc++.h>
using namespace std;

int main(){
    long long n, i, moves=0;
    cin>> n;
    long long values[n];
    
    for (i=0;i<n;i++){
        cin>> values[i];
    }
    for (i=1;i<n;i++){
        if(values[i]<values[i-1]){
            moves+=values[i-1]-values[i];
            values[i]+=values[i-1]-values[i];
        }
    }
     
    cout<< moves;
}