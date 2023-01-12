#include<iostream>
#include<math.h>
using namespace std ;  
int UCLN(int a,int b){
     a = abs(a);
     b = abs(b);
     while(a!=b){
          if(a>b) a-=b ; 
          else b-=a ; 
     }
     return a ; 
}
int main(){
    int n,s =1; 
        cout<<"\nNhap n: ";
        cin>>n;
   for(int i=1;i<=n;i++){
         s = s*i/UCLN(s,i);
   } 
   cout<<s<<endl; 
}