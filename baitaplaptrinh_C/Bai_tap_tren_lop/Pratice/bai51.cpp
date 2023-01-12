#include<iostream>
using namespace std ;
int a[21],n ; 
void out(){
    for(int i=0;i<n;i++){
        cout<<a[i];
    }
    cout<<" ";
}
void  Try(int i){
    for(int j=0;j<=1;j++){
        a[i]=j ;
        if(i==n-1) out();
        else Try(i+1);
    }
}
int main(){
    int t ; 
    cin>>t; 
    while(t--){
        cin>>n ; 
        Try(0);
        cout<<endl ; 
    }
}