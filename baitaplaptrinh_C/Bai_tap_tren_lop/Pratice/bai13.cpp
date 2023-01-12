#include<iostream>
using namespace std; 
long long GCD(long long a,long long b){
         while(a!=b){
              if(a>b) a-=b ; 
              else b-=a; 
         }
         return a ; 
}
int conver(int z){
    int sum = 1 ; 
    for(int i=1;i<=z;i++){
           sum*=10 ; 
    }
    return sum ; 
}
int main(){
     int a,x,y,P = 0,Q = 0; 
     cout<<"\nNhap lan luot a,x,y: ";
     cin>>a>>x>>y ; 
     int i ; 
    for(i=0;i<x;i++){
             P+=a*conver(i) ; 
    }
    for(i=0;i<y;i++){
        Q+=a*conver(i);
    }
    cout<<"UCLN: "<<GCD(P,Q);
}