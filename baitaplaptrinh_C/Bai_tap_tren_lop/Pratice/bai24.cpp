#include<iostream> 
#include<math.h>
using namespace  std ;
void solve(){
    int n,dem ; 
    cin>>n ; 
    for(int i=2;i<=sqrt(n);i++){
            if(n%i==0){
                  dem =  0 ;
                  while(n%i==0){
                         n/=i ; 
                         dem++ ;
                  } 
                  cout<<i<<" "<<dem<<" ";
            }
    }
    if(n>1) cout<<n<<" "<<"1";
}
int main(){
     int t ;
     cin>>t ;
     while(t--){
         solve();
     }
}