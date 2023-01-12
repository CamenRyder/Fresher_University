#include<iostream>
using namespace std ; 
int fibonaccy(int n){
    if(n==1) return 1 ;
    if(n==0) return 0 ; 
    return fibonaccy(n-1)+fibonaccy(n-2); 
}
void solve(){
    int n ; 
    cin>>n ;
    cout<<fibonaccy(n); 
}
using namespace std ; 
int main(){
    int t ; 
    cin>>t; 
    while(t--){
        solve();
    }
}