#include<iostream>
using namespace std ; 
int n,k,a[13]; 
void show(){
    for(int i=1;i<=k;i++){
          cout<<a[i]; 
    }
    cout<<" "; 
} 
void Try(int x){
       for(int i= a[x-1]+1;i<=(n-k+x);i++){
               a[x] =  i  ; 
               if(x == k) show() ;
               else Try(x+1) ;  
       }
}
void solve(){
    cin>>n>>k ;  
    Try(1); 
}
int main(){
           solve() ;
}