#include<bits/stdc++.h>
using namespace std ; 
void solve(){
    int n ;
    cin>>n  ; 
    int*p = new int (n*n) ; 
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>p[i*n+j] ;  
        }
    }
      int sum = 0  ; 
      for(int i=0;i<n;i++){
          for(int j=0;j<n;j++){
               if( i == j)
               {
                   sum+=p[i*n+j]; 
               }
          }
      }
      int x = 0 , y = n - 1  ; 
      for(int i=0;i<n;i++){
         sum-=p[(x++)*n+(y--)]; 
      }
      cout<<abs(sum)<<endl ;  
}
int main(){
    int t ;
    cin>>t ; 
    while(t--)
       solve() ; 
}