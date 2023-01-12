#include<iostream>
#include<math.h>
using namespace std ;
int GCD(int a,int b){
    a = abs(a);
    b = abs(b);
    while(a!=b){
        if(a>b) a-=b; 
        else b-=a ;
    }
    return a ; 
} 
int LCM(int a,int b){
    return a*b/GCD(a,b);
}
int main(){
    int a,b,c,n ; 
    cin>>a>>b>>c>>n ; 
    int Min = pow(10,n-1);
    int Max = pow(10,n),bcnn = LCM(a,LCM(b,c)); 
    if(bcnn > Max) {
        cout <<"-1" ; 
        goto here ; 
    }
    if(bcnn%Min == 0) cout <<Min ; 
    else cout<<(Min/bcnn+1)*bcnn ; 
    here:; 
    return 0 ; 
}