#include<iostream> 
#include<string>
using namespace std ; 
void slove(){
    string s ; 
    cin>>s; 
    int l=s.length();
    if(s[l-1]-48 == 6 && s[l-2]-48 == 8) 
           cout<<" 1 "<<endl  ;
    else cout<<"0"<<endl  ; 
}
using namespace std ; 
int main(){
     int t ; 
     cin>>t ; 
     while(t--)
         slove();
}