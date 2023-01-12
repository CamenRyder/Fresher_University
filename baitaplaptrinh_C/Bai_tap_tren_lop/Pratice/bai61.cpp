#include<bits/stdc++.h>
using namespace std ;  
void solve(){
       int n ,k ,count = 0  ; 
       cin>>n>>k  ; 
       int a[n] ;
       for(int i=0;i<n;i++){
           cin>>a[i] ; 
       }  
                for(int i=0;i<n-1;i++){
                    for(int j=i+1;j<n;j++){
                              if(a[i] == k - a[j]) count++ ; 
                    }
                }
                cout<<count ; 
}
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve() ; 
    }
}