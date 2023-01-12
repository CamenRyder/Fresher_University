#include<iostream>
using namespace std ; 
int giaithua(int n){
    if(n<2) return 1 ; 
    if(n==2 ) return n ; 
    return (n*giaithua(n-1));
}
const long long p = 10e9+7 ; 
void solve(){
    long long n,r,C ; 
    cin>>n>>r ; 
    C =(giaithua(n)/(giaithua(r)*giaithua(n-r)));
    cout<<C%p ; 
}
int main(){
    int  t; 
    cin>>t ;
    while(t--){
        solve();
    }
}
// còn 1 cách giải khá hay nhưng k p của mink dùng vòng lặp và điều kiện cực hay luôn. ông này cực giỏi toán :) 