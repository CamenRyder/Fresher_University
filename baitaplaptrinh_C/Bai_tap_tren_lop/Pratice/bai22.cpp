#include<iostream>
using namespace std ; 
void solve(){
    int n,count1 = 0 ,count =0 ; 
    cin>>n ; 
    for(int i=2;i<=n;i++){
         if(n%i==0) count++; 
            while(n%i==0){
                  n/=i ; 
                  count1++; 
            }
    }
    if(count == count1 && count1==3 ) cout << "1";
    else cout<<"0";
}
int main(){
    int t ; 
    cin>>t ;
    while(t--){
        solve();
    }
}