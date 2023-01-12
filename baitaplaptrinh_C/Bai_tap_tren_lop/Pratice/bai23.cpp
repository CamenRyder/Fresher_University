#include<iostream>
#include<math.h>
using namespace std ; 
void solve(){
    int n,p; 
    cin>>n>>p; 
    int sum = 0 ;  
    while(n){
        n/=p ; 
        sum+=n ; 
    }
    cout<<sum<<endl ;
}
int main(){
     int t;
     cin>>t;
     while(t--){
        solve();
     }
}