#include<iostream>
#include<math.h> 
using namespace std ; 
const int N = 10000 ;  // ý tưởng là nhập 10 -> với mỗi số từ 1 đến 10 tìm ước nhỏ nhất là số nguyên tốc ụ á 
int prime[N];       // hack não zl  nhma hỉu mang máng r :v 
void seive(){  // mong sau này coi lại vẫn hiểu! 
    prime[0] = 1 ; 
    prime[1] = 1 ; 
    for(int i=0;i<=sqrt(N);i++){
        if(prime[i]==0){
             for(int j=i*i;j<=N;j+=i){
                    prime[j] = 1 ; 
             }
        }
    }
}
void solve(){
     int n ;
     cin>>n ; 
     cout<<"1 ";
     for (int i=2;i<=n;i++){
            for(int j=2;j<=i;j++){
                   if(prime[j]==0 && i%j==0) {
                         cout<<j<<" ";
                         break ; 
            }
            }
     }
}
int main(){
      int t ; 
      cin>>t  ;
      while(t--){
          solve();
      }
}