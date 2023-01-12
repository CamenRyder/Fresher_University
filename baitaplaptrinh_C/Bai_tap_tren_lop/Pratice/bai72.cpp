#include<bits/stdc++.h>
using namespace std ; 
int check(int a[],int n,int target){
       int count = 0  ; 
       for(int i=0;i<n;i++){
           if(a[i] == target)
             count++ ; 
       }
       return count ; 
}
void solve(){
    int n,m ;  
    cout<<"Nhap a: " ; 
    cin>>n ; 
    int a[n]  ;
    for(int i=0;i<n;i++)
    {
        cin>>a[i] ;  
    }
     cout<<"Nhap b: ";
    cin>>m ;  
     int b[m]; 
     int tmp[100];
     int length =  1 ;  
    for(int i=0;i<m;i++)
    {    
         int flag =   0  ; 
         cout<<"B["<<i+1<<"]: ";
        cin>>b[i] ;
        
        for(int j=0;j<length;j++){
            if (b[i] == tmp[j] ) flag = 1 ; 
        } 
        if(!flag) 
           {
                 tmp[length++] = b[i] ; 
           }
    }
    sort(tmp,tmp+length);  
       for(int i=0;i<length;i++)
       {
             if(check(b,m,tmp[i]) > check(a,n,tmp[i]))
             {
                 cout<<tmp[i]<<" "; 
             }
       }
}
int main(){
    int t  ; 
    cin>>t ; 
    while(t--)
      solve(); 
}