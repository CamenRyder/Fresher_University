#include<iostream>
using namespace std ;
int number_prime(int number){
       if(number == 1 || number ==0) return 0 ; 
       int dem= 0 ; 
       for(int i=2;i<number;i++){
            if(number%i ==0) dem++ ; 
       }
       if (!dem) return 1 ;
       return 0 ; 
}
int main(){
    int front_end ,back_end ; 
    cout<<"Enter number front end: ";
    cin>>front_end ;
    cout<<"Enter number back end: ";
    cin>> back_end ; 
    for(int i=front_end;i<=back_end;i++){
            if(number_prime(i)) cout <<i<<"\t";
    }
}