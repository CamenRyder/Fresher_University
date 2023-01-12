#include<iostream>
using namespace std ; 
void solve(){
    int n, f0 = 0 ,f1 = 1 ,fn ; 
    cin>>n ; 
    while(f0+f1<=n){
        fn = f1 + f0  ; 
        f0  = f1 ; 
        f1 = fn ; 
    }
    if(fn == n || n==0){ 
        cout<<"YES";
    }
    else cout<<"NO";
}
int main(){
    int t ;
    cin>>t ;
    while(t--){
        solve(); 
    }
}