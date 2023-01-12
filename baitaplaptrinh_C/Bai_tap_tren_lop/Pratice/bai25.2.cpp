#include<iostream>
using namespace std ;
int prime(int n){
    if(n<2) return 0 ;
    for(int i=2;i<(n);i++){
          if(n%i==0) return 0 ; 
    }
    return 1; 
}
int sum(int n){
    int sum = 0 ;
    while(n>1){
        sum+=(n%10);
        n/=10 ; 
    }
    return sum ; 
}
void solve(){
    int n,sum1,sum2=0,i = 2,tmp   ;
    cin>>n ;  
    tmp = n ; 
    sum1 = sum(n); 
    while(n>0){
        if(n%i==0){
            sum2+=sum(i); 
            n/=i ; 
        }
        else i++;  
    }
    if(sum1==sum2 && !prime(tmp)) cout<<"YES\n"; 
    else cout<<"NO\n"; 
}
int main(){
    int t;
    cin>>t; 
    while(t--){
        solve();
    }
}