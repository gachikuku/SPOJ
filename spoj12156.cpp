#include <bits/stdc++.h>

using namespace std;


int t;
string s = "";


string hafhaf(string s){

    string cur = "";

    for(unsigned int i=0;i<s.size()/2;i+=2){
        cur += s[i];}
        
    return cur;
}


int main(){

    ios::sync_with_stdio(0);
    
    cin.tie(0);
    
    cin>>t;
    
    while (t--){
    
        cin>>s;
        
        cout<<hafhaf(s)<<"\n";
        
        s = "";
    }
    
    return 0;
}