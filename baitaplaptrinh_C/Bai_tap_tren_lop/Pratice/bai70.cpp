#include<bits/stdc++.h>
using namespace std ; 
void solve(){
    int max  =  1  ; 
    int n  ;cin>>n ; int a[n] ; 
     for(int i=0;i<n;i++){
         cin>>a[i] ; 
     }
     sort(a,a+n) ;  
     for(int i=n-1;i>1;i--){
           if (a[i] == a[i-1]){
               max++ ; 
           }else break ; 
     }
     cout<<max ; 
}
int main(){
    int t ; 
    cin>>t ; 
    while(t--)
    solve() ; 
}