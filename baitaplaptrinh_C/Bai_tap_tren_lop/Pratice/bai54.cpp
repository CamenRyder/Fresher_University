#include<iostream>
#include<math.h>
#include<algorithm>
using namespace std ; 
 int main(){
     int n , a[100],value ;  
     cin>>n ;  
     for(int i=0;i<n;i++){
         cin>>a[i] ; 
     }
     cin>>value ;  
    //  int min = abs(value-a[0]);  
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
                  if(abs(value-a[i]) > abs(value-a[j]))
                        swap(a[i],a[j]); 
        }
    }
       for(int i=0;i<n;i++)
        {
            cout<<a[i]<<" ";
        }
 }