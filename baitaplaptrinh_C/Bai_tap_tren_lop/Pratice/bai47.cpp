#include<iostream>
using namespace std ; 
// const int mod = 100000 ; 
void solve(){
    int n ; 
    cin>>n ; 
    int a[100];
    a[0]= 0; a[1]=1 ;
    for(int i=2;i<=n;i++){
           a[i] = (a[i-1]+a[i-2]); 
    } 
    cout<<a[n]; 
}
int main(){
    int t; 
    cin>>t ;
    while(t--){
        solve();
    }
}