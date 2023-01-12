#include<iostream> 
using namespace std ; 
int divisor(int n){ 
      int dem = 0  ;
    for(int i = 2;i<n;i++){
           if(n%i==0) dem++ ; 
    }
    if(dem==1) return 1 ; 
    return 0 ; 
}
void solve(){
    int n ; 
    cin>>n ; 
   for(int i=3;i<=n;i++){
         if ( divisor(i)) cout<<i<<" "; 
   }
}
int main(){
     int t ;
     cin>>t ;
     while(t--){
         solve();
     }
}