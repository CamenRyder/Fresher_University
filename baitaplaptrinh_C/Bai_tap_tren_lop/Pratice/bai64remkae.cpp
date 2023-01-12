#include<iostream>
#include<algorithm>
using namespace std ; 
void solve(){
      int n,m ;  
      cin>>m>>n ;  
      int a[100]  ; 
      for(int i=0;i< m+n;i++){
                 cin>>a[i]  ; 
      } 
     sort(a,a+m+n) ; 
      for(int i=0;i<m+n;i++){
          cout<<a[i]<<" " ; 
      }
}
int main(){
    int t; 
    cin>>t ;
    while(t--)
    solve() ; 
}