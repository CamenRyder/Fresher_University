#include<iostream>
#include<math.h>
using namespace std ; 
void solve(){
     int a,b,c ;
     cin>>a>>b>>c ; 
    cout<<(a*b)%c ;    
}
long long multi(long long a,long long b,long long c){
       if(b==0) return 0 ;
       if(b==1) return a%c ; 
       long long temp = multi(a,b/2,c); 
       if(b%2==0) return temp*2%c ; 
       else return (temp*2%c+a)%c; 
}
void solve2(){
    long long a,b,c ; 
    cin>>a>>b>>c ;
    cout<<multi(a,b,c);
}
int main(){
     int t ;
     cin>>t ;
     while(t--) solve();
}