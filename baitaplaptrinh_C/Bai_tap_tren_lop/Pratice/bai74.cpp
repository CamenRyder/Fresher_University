#include<iostream>
using namespace std ; 
long long factorial(int n)
{   
       long long mutli = 1 ; 
     for(int i=0;i<n-1;i++){
           mutli*= (n-i) ; 
     }
     return mutli ; 
}
void solve(){
    int n  ; 
     cin>>n ;  
     cout<<factorial(n); 
}
int main(){
    int t ; 
    cin>>t  ;
     while(t--)
     solve() ; 
}