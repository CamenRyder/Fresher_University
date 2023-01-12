#include<iostream>
#include<algorithm> 
using namespace std ; 
int main(){
       int n, a[100] ;  
       cin>>n  ; 
       for(int i=0;i<n;i++){
           cin>>a[i] ;  
       }
       int b = 0  ,  e = n - 1 ;
       sort(a,a+n) ;    
       while(b<e){
           cout<<a[e]<<" "<<a[b]<<" "; 
           e-- ; 
           b++ ;  
       }
       if(b == e) cout<<a[b] ;  
}