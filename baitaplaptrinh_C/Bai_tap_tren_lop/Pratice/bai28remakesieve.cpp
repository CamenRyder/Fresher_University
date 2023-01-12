#include<iostream>
#include<math.h>
using namespace std ; 
const int N = 1e4+5;
int prime[N]; 
void seive(){    //sàng phần tử, khá hay !
    prime[0] = 1 , prime[1] = 1 ; 
     for(int i=0;i<=sqrt(N);i++){
                if(prime[i]==0) 
                {
                    for(int j=i+i;j<=N;j+=i){
                        prime[j] = 1 ; 
                    }
                }
     }
}
void solve(){
     seive();
     int n ; 
     cin>>n ; 
     for(int i=1;i<=sqrt(n);i++){
             if(prime[i]==0) cout<<i*i<<" ";
     }
     cout<<endl  ; 
}
int main(){
    int t ; 
    cin>>t ; 
    while(t--){
        solve();
    }
}