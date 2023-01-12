#include<iostream>
using namespace std ; 
int a[8],n ;  
void out(){
    for(int i=0;i<n;i++){
        cout<<a[i];
   }
   cout<<"\t";
}
void  Try(int i){
     for(int j=0;j<=1;j++){
           a[i]=j ; 
           if(i==n-1) out();
           else Try(i+1); 
     }
}
int main(){
    cout<<"Enter n to have solve: ";
    cin>>n ;
    cout<<endl ; 
    Try(0) ; 
}