#include<iostream> 
#include<algorithm>
using namespace std ;
int Max, Count = 0   ;
void Try(int n, int a[]){ 
    Max = a[0] ;  
    Count  = 0  ; 
    for(int i=1;i<n;i++){
          if(Max < a[i]) {
              Max = a[i]; 
              Count = i ;  
    }
}}
int main(){
    int n, a[100] ;  
    cin>>n  ;
     for(int i=0;i<n;i++){
           cin>>a[i];  
     }
    int res =  0 ,dem = 0 ;  
         while(true){
            Try(n-res,a) ; 
            if(a[n-res-1] == Max && res == (n-1)) break  ; 
            if(a[n-res-1] == Max ) goto here ; 
            swap(a[n-res-1],a[Count]);
            dem++ ; 
            here: 
            res++ ;  
         }
         for(int i=0;i<n;i++){
                 cout<<a[i]<<" "   ; 
         }
         cout<<endl<<dem ;  
}