#include<iostream>
#include<algorithm>
using namespace std ;
const int N = 100 ;
void solve(){
      int a[N],n,i,count1 = 1 ; 
      cin>>n ; 
      for( i=0;i<n;i++)
            cin>>a[i]; 
            int Min = a[0];
      for(i=1;i<n;i++)
               Min = min(Min,a[i]);
      for(i=2;i<=Min;i++){
             int count=0  ;
        for(int j=0;j<n-1;j++ ){
                   if((a[j]%i) == (a[j+1]%i)) {
                         count++ ; 
                   }
            }
            if(count == (n-1)) {
                count1++ ;  
      }
}
cout<<count1 ;
}
int main(){
     int t; 
     cin>>t ;
     while(t--){
         solve();
     }
}