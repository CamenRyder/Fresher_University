#include<iostream>
#include<math.h>
using namespace std ;  // so modulo ; 
void solve(){
    int x,y,p,mod =1; 
    cin>>x>>y>>p ; 
    for(int i=1;i<=y;i++){
         mod = mod*x%p ;
    }
    cout<<mod ; 
}
void solve2(){
    int x,y,p,mod ; 
    cin>>x>>y>>p ; 
    mod = pow(x,y);
    cout<<mod%p ; 
}
int main(){
    int t ; 
    cin>> t ; 
    while(t--){
     solve2();
    }
} 
   