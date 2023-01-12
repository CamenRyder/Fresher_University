#include<iostream>
#include<string.h>
using namespace std ; 
void solve(){
    int m  ; 
    string n ;
    long long mod = 0 ; 
     cin>>n>>m ; 
     for(int i=0;i<n.length();i++){
            mod = (mod*10+n[i]-'0')%m ; 
     } 
     cout<<mod<<endl; 
}
int main(){
    int t ; 
    cin>>t ;
    while(t--){
        solve();
    }
}