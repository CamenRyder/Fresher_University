#include<bits/stdc++.h>
using namespace std ; 
void solve(){
    int  n  ; 
    cin>>n ;  
    long long a[n] ; 
    long long sum = 0  ; 
     for(int i=0;i<n;i++)
     {  
        cin>>a[i]; 
         sum+=a[i]  ;
     }
     cout<<sum  ;  
}
int main(){
     int t ; 
     cin>>t ;
     while(t--)
     {
         solve(); 
     }
}
