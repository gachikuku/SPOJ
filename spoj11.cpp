#include <bits/stdc++.h>

using namespace std;

#define ll long long 


ll T, ans = 0;


int Z(ll N){
    
    for (int i = 5; i <= N; i *= 5){
    
        ans += N/i;
    }
    
    return ans;
}


int main(){

    ios::sync_with_stdio(0);
    
    cin.tie(0);
    
    cin >> T;
    
    while (T--){
    
        ll N;
    
        cin >> N;
        
        cout<<Z(N)<<"\n";
        
        ans = 0;
    }
    
    return 0;
}