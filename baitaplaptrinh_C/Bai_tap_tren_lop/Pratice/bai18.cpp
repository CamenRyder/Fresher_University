#include<iostream>
using namespace std ;
int prime(int a){
    if(a<2) return 0  ;
    for(int i=2;i<a;i++){
        if(a%i==0) return 0  ;
    }
    return 1; 
}
int main(){
    int n;
    cin>>n; 
    for(int i=2;i<=n;i++){
           if(prime(i)) cout<<i<<"\t";
    }
}