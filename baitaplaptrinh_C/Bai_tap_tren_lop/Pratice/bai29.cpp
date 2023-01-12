#include<iostream> 
#include<math.h>
using namespace std ;
const int N = 1000000 ; 
int prime[N] ; 
void seive(){
      prime[0] = 1 ; 
      prime[1] = 1 ; 
      for(int i=0;i<=sqrt(N);i++){
            if(prime[i]==0){
                 for(int j=i*i;j<=N;j+=i){
                      prime[j] == 1 ; 
                 }
            }
      }
      } 
void solve(){
    int n,m ,dem = 0  ;
    cin>>n>>m  ;
    seive();
    for(int i=n;i<=sqrt(m);i++){
        if(prime[i]==0 && i+i <= m) dem++ ;
    }
   cout<<dem ; 
}
int main(){
    int t ; 
    cin>>t ;
    while(t--){
        solve() ; 
    }
}