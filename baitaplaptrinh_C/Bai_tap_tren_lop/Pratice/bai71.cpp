#include<bits/stdc++.h>
using namespace std ;  
int main(){
    int n = 5  ;
    int a[5] ;  
    for(int i=0;i<n;i++)
    {
          cin>>a[i] ;  
    }
    sort(a,a+n) ; 
    int min = 0 , max = 0  ; 
    for(int i=0;i<n-1;i++){
           min += a[i] ; 
           max += a[i+1]; 
    }
    cout<<min<<" "<<max;  
}