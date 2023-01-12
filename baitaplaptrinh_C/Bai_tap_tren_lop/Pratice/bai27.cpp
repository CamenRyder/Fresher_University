#include<iostream>
using namespace std ; 
void solve(){
     int n,k; 
     cin>>n>>k ; 
     int dem = 0 ;  
     for(int i=2;i<=n;i++){
         if(n%i==0){
              while(n%i==0){
                  dem++ ;
                  if(dem == k) {
                      cout<<i<<endl ; 
                      return ;
                  }
                    n/=i ; 
              }
         }
     }
      cout<<"-1"; 
} 
int main(){
    int t; 
    cin>>t ; 
    while(t--) solve();

}