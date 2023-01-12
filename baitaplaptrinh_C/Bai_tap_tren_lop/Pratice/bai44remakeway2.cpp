#include<iostream>
#include<string>
using namespace std ;
void solve(){
     string a,b,res=" ";
     cin>>a>>b ; 
     int carry = 0  ;  // phần dư! 
     while(a.length()>b.length()) b="0"+b ; 
     while(a.length()<b.length()) a= "0"+a ; 
     for(int i=a.length()-1;i>=0;i--){
              int tmp = a[i]-48+b[i]-48+carry ; 
              carry = tmp/10; 
              tmp = tmp%10; 
              res = char(tmp+48)+res; 
     }
     if(carry>0) res = "1"+res ; 
     cout<<res<<endl ; 
}
int main(){
    int t ; 
    cin>>t; 
    while(t--)solve();
}