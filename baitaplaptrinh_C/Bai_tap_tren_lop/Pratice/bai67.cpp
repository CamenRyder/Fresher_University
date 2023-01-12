#include<bits/stdc++.h>
using namespace std ; 
typedef struct evaluation{
         int mark_Long = 0  ;  
         int mark_Tuan = 0   ;  
}eva;  
void solve(){
    int  n = 3 ; 
    eva mark ;   
    int a[n]  ,b[n]  ; 
    for(int i =0; i<n;i++)
    {
         cin>>a[i] ;  
    }
      for(int i =0; i<n;i++)
    {
         cin>>b[i] ;  
    }
    for(int i=0;i<n;i++)
    {
        if(a[i] > b[i]) mark.mark_Tuan +=1 ; 
        if(a[i] < b[i]) mark.mark_Long +=1;  
    }
    cout<<endl<<mark.mark_Tuan<<" "<<mark.mark_Long   ; 
}
int main(){
       int t ;  
       cin>>t ; 
    while(t--)
    {
         solve();
    }
}