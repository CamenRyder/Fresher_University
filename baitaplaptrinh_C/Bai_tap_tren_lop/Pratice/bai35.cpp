#include<iostream>
using namespace std ; 
void solve(){
    int K,N ; 
    cin>>N>>K ; 
    long long res = 0 ; 
    for(int i=1;i<=N;i++){
          res+=i%K ;
    }
    cout<<res ; 
}
int main(){
    int t ;
    cin>>t; 
    while(t--){
        solve();
    }
}