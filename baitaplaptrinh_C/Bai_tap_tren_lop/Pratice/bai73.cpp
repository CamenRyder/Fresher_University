#include<iostream>
using namespace std  ; 
void solve(){
    int n; 
    cin>>n  ;
    int a[100] ;  
    for(int i=0;i<n;i++)
    {
        cin>>a[i]; 
    }
    int left = 0, right = 0, number ;  
    if (n==1) {
         cout<<"YES"<<endl;  
         return ; 
    }
    for(int i=0;i<n;i++)
    {   
          number = i ; 
         for(int j=0;j<number;j++){
             left +=a[j] ; 
         }
         for(int j=n-1;j>number;j--)
         {
              right +=a[j]; 
         }
         if(left == right ) {
             cout<<"YES"<<endl ; 
             return ;  
         }
         else 
         {
               left = 0  ; 
               right = 0  ;  
         }
    }
    cout<<"NO"<<endl ;  
}
int main(){
    int t ; 
     cin>>t ; 
     while(t--)
     {
         solve(); 
     }
}