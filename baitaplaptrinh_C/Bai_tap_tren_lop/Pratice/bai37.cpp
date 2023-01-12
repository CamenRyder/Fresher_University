#include<iostream>   // cách làm bị cùn muốn tham khao cach tong quan o trang 40 
#include<math.h>
#include<string.h>
using namespace std ; 
void solve(){
    int n,m ;
    long long tmp = 0;   
    string a ; 
    cin>>a>>n>>m; 
    for(int i=0;i<a.length();i++){
        tmp = tmp*10+a[i]-'0';
    } 
    long long  tmp2 = (pow(tmp,n))   ;
    cout<<tmp2%m ; 
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        solve();
    }
}