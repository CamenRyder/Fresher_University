#include<iostream>
#include<algorithm>
using namespace std  ; 
void solve(){
    int m , n  ;  
    cin>>m>>n   ;  
    int a[20] , b[20] ;  
    for(int i=0;i<m;i++)
            cin>>a[i] ; 
    for(int i=0;i<n;i++)
           cin>>b[i] ; 
    sort(a,a+m,greater<int>());
    sort(b,b+n); 
    cout<<a[0]*b[0]; 
}
int main(){
     int t ;
     cin>>t ; 
     while(t--)
     solve() ; 
}