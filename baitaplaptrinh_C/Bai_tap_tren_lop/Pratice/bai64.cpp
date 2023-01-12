#include<bits/stdc++.h>
using namespace std ; 
void solve(){
    int m,n ;  
    cin>>m>>n ; 
    int a[m] , b[n] , c[m+n];  
    for(int i=0;i<m;i++){
            cin>>a[i] ;  
            c[i] =  a[i] ;  
    }
    for(int i=m;i<m+n;i++){
        cin>>b[i-m] ;
        c[i] = b[i-m] ;  
    }
    sort(c,c+(m+n));
    for(int i=0;i< (m+n);i++){
        cout<<c[i]<<" ";  
    }
    cout<<endl; 
    sort(c,c+(m+n),greater<int>()) ; 
      for(int i=0;i< (m+n);i++){
        cout<<c[i]<<" ";  
    }
}
int main(){
    int t  ; 
    cin>>t ; 
    while(t--)
    solve() ;  
}