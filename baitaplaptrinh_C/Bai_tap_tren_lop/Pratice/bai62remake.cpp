#include<bits/stdc++.h>
// #include<String.h>
using namespace std ; 
void solve(){
    int n  ;
    cin>>n  ;
    string s ="" , temp ="";
    for(int i=0;i<n;i++){
        cin>>temp ;  
        s+=temp ; 
    }
    int l = s.length()  ; 
    int a[l]  ; 
    for(int i=0;i<l;i++){
        a[i] = s[i]-48  ; 
    }
    sort(a,a+l) ;  
    for(int i=0;i<l-1;i++){
        if(a[i] != a[i+1]) cout<<a[i]<<" "; 
    }
}
int main(){
    int t;  
    cin>>t; 
    while(t--)
    solve() ;
}