#include<iostream>
#include<math.h>
using namespace std ; 
const int N = 100 ; 
void solve(){
    int n,a[N],x ; 
    cin>>n>>x; 
    for(int i=0;i<n;i++){
        cin>>a[i]; 
    }
    int P = 0 ; 
    for(int i=0;i<n;i++){
           P+=a[i]*pow(x,(n-(i+1)));
    }
    cout<<P ; 
}
int main(){
    int t ;
    cin>>t ;
    while(t--){
        solve();
    }
}