#include<iostream> 
#include<string>
using namespace std;
long long GCD(long long a,long long b){
         while(a!=b){
              if(a>b) a-=b ; 
              else b-=a; 
         }
         return a ; 
}
int main(){
        long long a,mod  ; 
        string s ; 
         cout<<"\nEnter two number: ";
         cin>>a>>s;  
         for(int i=0;i<s.length();i++)
           mod = (mod*10+s[i]-48)%a; 
         cout<<GCD(a,mod);
     }

