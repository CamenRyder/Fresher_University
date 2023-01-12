#include<iostream>
#include<string>
using namespace std ; 
int compact(int x){
      if(x<=9) return x ; 
      int sum=0 ; 
      while(x>0){
             sum+=(x%10);
             x/=10;
      }
      x = sum ; 
      return compact(x);
}
int main(){
         int a ;
         cout<<"\nNhap n de co so rut gon: ";
         cin>>a; 
         cout<<"\nSo rut gon: "<<compact(a);
}