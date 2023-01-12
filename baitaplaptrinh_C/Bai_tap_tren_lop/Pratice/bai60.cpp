#include<bits/stdc++.h>
using namespace std ;  
void solve(){
    int n , m   ; 
    cin>>n>>m  ; 
    int x[n]  , y[m] ,count = 0  ;  
    for(int i=0;i<n;i++){
        cin>>x[i] ;  
    }
    for(int i=0;i<m;i++){
        cin>>y[i] ;  
    }
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
               if(pow(x[i],y[j]) > pow(y[j],x[i])) count++  ;
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