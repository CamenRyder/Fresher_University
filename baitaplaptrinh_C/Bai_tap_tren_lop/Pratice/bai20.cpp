#include<iostream>
using namespace std ;
int prime(int a){
    for(int i=2;i<a;i++){
        if(a%i==0) return 0 ; 
    }
    return 1 ;
}
int main(){
      int m,n ; 
      cin>>m>>n ; 
      for(int i=m;i<=n;i++){
            if(prime(i)) cout<<i<<"\t" ; 
      }
}