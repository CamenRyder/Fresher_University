#include<iostream> 
#include<math.h>
using namespace std ;
int sumofNumber(int N){
     int sum = 0 ;
     while(N!=0){
         sum+=(N%10) ; 
         N/=10; 
     }
     return sum ; 
}
int Sum_excess_element(int N){  
     int sum = 0 ; 
       for(int i=2;i<=sqrt(N);i++){
             if(N%i==0){
                    while(N%i==0){
                        sum+=i ; 
                        N/=i ; 
                    }
             }
       }
       if(N>1) sum+=sumofNumber(N);
       return sum ; 
}
int check(int n){
     if(n<2) return 0 ;  
     for(int i=2;i<=sqrt(n);i++){
         if(n%i==0) return 0 ;
     }
     return 1; 
}
void solve(){
      int n   ; 
      cin>>n ; 
      if(check(n)) cout<<"NO\n";
      int tmp1 = sumofNumber(n); 
      int tmp2 = Sum_excess_element(n);
      if(tmp1==tmp2) cout<<"Yes\n";
      else cout<<"No\n"; 
} 
int main(){
      int t ; 
      cin>>t; 
       while(t--){
           solve(); 
       }
} 