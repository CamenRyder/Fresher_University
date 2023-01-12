#include<iostream>
using namespace std ; 
int sum(int n){
    int sum = 0 ; 
    while(n>1){
        sum+=(n%10) ; 
        n/=10 ; 
    }
    return sum ; 
}
int sum_expess_of_sumber(int n){
    int Sum = 0 ; 
     for(int i=2;i<=n;i++){
            if(n%i==0){    
                   while(n%i==0){
                           Sum+=sum(i);   
                           n/=i ;
                   }          
            }
     }
     if(n>1) Sum+=sum(n);
     return Sum+1 ; 
}
void solve(){
    int n ; 
    cin>>n ;
    if(n==sum_expess_of_sumber(n)) cout<<"1";
    else cout<<"0";
}
int main(){
    int t ;
    cin>>t ;
    while(t--){
        solve(); 
    }
    
}