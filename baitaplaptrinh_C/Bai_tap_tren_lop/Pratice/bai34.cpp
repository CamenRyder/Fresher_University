#include<iostream>
using namespace std ; 
void solve(){
    int a,m; 
    cin>>a>>m; 
   int count = 0 ; 
      for(int i=1;i<m;i++){
            if(a*i%m==1){
                    count++ ;  
                    cout<<i<<endl; 
                    break ;
            }
      }
      if(!count) cout<<"-1"<<endl ;  
}
int main(){
    int t ; 
    cin>> t ;
    while(t--){
        solve();
    }
}