#include<iostream> 
#include<vector>
using namespace std;  
void solve(){
    int n,k ; 
    cin>>n>>k  ;
    vector<int>a ; 
    for(int i=2;i<=n;i++){
          if(n%i==0){
                while(n%i==0){
                     a.push_back(i);
                     n/=i ; 
                }
          }
    }
    if(a.size()<k) cout<<"-1"; 
    else cout<<a[k-1]; 
}
int main(){
    int t ; 
    cin>>t; 
    while(t--) solve();
}