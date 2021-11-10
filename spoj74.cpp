#include <bits/stdc++.h>

using namespace std;


int t, n, res = 0;


int divisors(int n){

    int i = 1;
    
    while (i*i <= n){
    
        if (n%i==0){
        
            res += i;
        
            if (n/i!=i) {res += n/i;}
        }
        
        i++;
    }
    
    res -= n;
    
    return res;
}



int main(){

    ios::sync_with_stdio(0);
    
    cin.tie(0);
    
    cin>>t;
    
    while (t--){
    
        cin>>n;
        
        cout<<divisors(n)<<"\n";
        
        res=0;
    }
    
    return 0;
}