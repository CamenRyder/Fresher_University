#include<iostream>
using namespace std ; 
int main(){
       int a[100],n ; 
       cout<<"\nNhap so luong phan tu trong mang: ";
       cin >>n ;
       int i  ; 
       for(i=0;i<n;i++){
                  cout<<"a["<<i+1<<"]: ";
                  cin>>a[i];
       }
     for(i=1;i<n-1;i++){
            int j = 0 ,sum1 =0,sum2=0; 
            for(j=0;j<i;j++){
                   sum1+=a[j];       
            }
            for(j=i+1;j<n;j++){
                  sum2+=a[j];
            }
            if(sum1==sum2){
                cout<<"\nVi tri can bang: "<<i+1    ; 
                      return 0 ; 
            }
     }  
     cout <<"\n -1";     
}