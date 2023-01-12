#include<iostream>
#include<math.h>
using namespace std;  
int GCF(int a, int b){    // greatest common factor 
             a = abs(a);
             b = abs(b);
             while(a!=b){
                 if(a>b)a-=b;
                 else b-=a;
             }
             return a;
}
int multiplication(int a[],int n){
     int mul = 1 ;
     for(int i=0;i<n;i++){
         mul*=a[i];
     }
     return mul ; 
}
int greatest_common_factor_of_all_element_in_array(int a[],int n){
    int mul = 1 ; 
    for(int i=0;i<n-1;i++){
      mul +=GCF(mul,GCF(a[i],a[i+1]));   // hoàn toàn tự làmm và làm trong 2 phút!
    }
    return mul ; 
}
int main(){
      int a[100],b,n; 
    cout<<"\nEnter quanity of arrray: ";   
    cin>>n ; 
    for(int i=0;i<n;i++){
        cout<<"a["<<i<<"]: ";
        cin>>a[i];
    } 
        int m = greatest_common_factor_of_all_element_in_array(a,n);
        b = multiplication(a,n);
        long long z = pow(b,m); 
        cout<<endl<<z;  
     
}