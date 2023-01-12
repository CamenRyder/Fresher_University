#include<iostream>
using namespace std ;
int check_prime(int a){ 
       if(a<2) return 0 ; 
     for(int i=2;i<a;i++){
           if(a%i == 0) return 0 ;
     }
     return 1; 
}
int main(){
    int n ; 
    cin>>n ; 
    for(int i=1;i<=n;i++){
          if(n%i==0)
           if(check_prime(i)) cout<<i<<endl ; 
    }
    
}