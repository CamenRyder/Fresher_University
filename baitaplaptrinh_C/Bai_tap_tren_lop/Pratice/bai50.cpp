#include<iostream>
using namespace std ;
int IsFibinaciy(int n){
    int f0=0 , f1=1,fn ;
    while(f0+f1 <= n){
         fn = f0 +f1 ; 
         f0 = f1 ;
         f1 = fn  ; 
    }
    if(fn == n||fn == 0) return 1 ;
    else return 0 ;  
}
void solve(){
    int i,n,a[15],max = 0 ,tmp = 0,localmax = 0 ; 
    cin>>n ; 
    for(i=0;i<n;i++){
        cin>>a[i];
    } 
    for(i=0;i<n;i++){
        if(IsFibinaciy(a[i])) {
                    tmp++ ; 
                    if (tmp>max) {
                        max = tmp ; 
                    localmax = i ;  
                    }
        }
        else tmp = 0 ;  
    }
    for(i=localmax-max;i<=max;i++){
        cout<<a[i]<<"\t" ; 
    }
} 
int main(){
    int t ;
    cin>>t ;
    while(t--){
        solve();
    }
}