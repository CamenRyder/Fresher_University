#include<iostream>
#include<string>
using namespace std ;
int check(int n){
       int sum = 0 ; 
       while(n){
           sum+=n%10 ; 
           n/=10 ; 
       }
       if(sum == 9) return 1 ; 
       return 0 ; 
}
int main(){
          int a,n ; 
          cout<<"Enter quanity: ";
          cin>> n ; 
          cin>> a ; 
          if(check(a)) cout<< "\nIs lucky number! ";
            else cout<<"\nIs not lucky number! ";
}