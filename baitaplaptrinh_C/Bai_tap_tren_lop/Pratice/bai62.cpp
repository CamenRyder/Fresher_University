#include<bits/stdc++.h>
using namespace std ;
void solve(){
    int n  ; 
    cin>>n  ; 
    int a[n],B[10];  
    for(int i=0;i<10;i++){
        B[i] =  0  ; 
    }
    for(int i=0;i<n;i++){
        cin>>a[i] ;  
    } 
     for(int i=0;i<n;i++){
         int tmp = a[i]  ; 
         while(tmp){
             int x = tmp%10  ;
             B[x]  = 1 ;   
             tmp/=10 ; 
         }
     }
     for(int i=0;i<10;i++){
         if(B[i] == 1)  cout<<i<<" "; 
     }
} 
int  main(){
    int t ;
    cin>>t ; 
    while(t--){
        solve() ;  
    }
}