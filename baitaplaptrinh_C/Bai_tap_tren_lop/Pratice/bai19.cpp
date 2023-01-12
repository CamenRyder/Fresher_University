#include<iostream> 
using namespace std ; 
int prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0) return 0;
    }
    return 1 ; 
}
int check(int a){ 
     if(prime(a)) return a ; 
     if(a==1) return 1; 
    if (a%2==0) return 2 ; 
 return 3 ;

}
int main(){
   int n ; 
   cin>>n ; 
   for(int i=1;i<=n;i++){
         cout<<check(i)<<"\t"; 
   }
}