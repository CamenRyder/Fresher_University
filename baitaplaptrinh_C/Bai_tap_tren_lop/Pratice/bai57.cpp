#include<iostream>
using namespace std ; 
void solve(){
    int n,m , A[100005] , B[100005] , dp1[100005] , dp2[100005]  ; 
    cin>>n>>m ;  
    for(int i=0;i<=100000;i++){
             dp1[i]  = 0  ; 
             dp2[i]  = 0  ; 
    }
    for(int i=0;i<n;i++){
        cin>>A[i] ; 
        dp1[A[i]]  = 1 ;
    }
    for(int i=0;i<m;i++){
        cin>>B[i]; 
        dp2[B[i]] = 1 ; 
    }
    for(int i=0;i<=100000;i++){
          if(dp1[i] == 1 || dp2[i] == 1) cout<<i<<" " ; 
    }
    cout<<endl; 
    for(int i=0;i<=100000;i++)
        if(dp1[i] == 1 && dp2[i] == 1) cout<<i<<" ";
        cout<<endl ; 
}
int main(){
    int t ; 
    cin>>t ; 
    while(t--)
       solve() ; 
}