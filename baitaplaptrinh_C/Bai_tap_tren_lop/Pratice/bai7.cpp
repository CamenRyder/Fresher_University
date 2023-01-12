#include<iostream>
using namespace std; 
int prime_number(int n){
      if(n<2) return 0 ; 
      for(int i=2;i<n;i++){
             if(n%i == 0) return 0 ;
      } 
      return 1 ;
} 
void Slove(){
      int n ;
      cout<<"\nNhap so nguyen x: "; 
      cin>>n ; 
      cout<<"\n"<<prime_number(n);
}
int main(){
    int j ; 
    cin >> j ;
    while(j--){
           Slove();
    }
}