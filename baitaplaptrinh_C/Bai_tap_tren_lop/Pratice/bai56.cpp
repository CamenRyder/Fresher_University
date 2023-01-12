#include<iostream>
#include<algorithm>
using namespace std ; 
void solve(){
     int n,m,a[100],b[100],tmp[100],oniron[100]; 
     cin>>n  ; 
     for(int i=0;i<n;i++){
            cin>>a[i] ; 
     }
     cin>>m ; 
     for(int i=0;i<m;i++){
         cin>>b[i]; 
     }
     sort(a,a+n); 
     sort(b,b+m);
     for(int i=0;i<n;i++){
           tmp[i] = a[i]; 
     } 
     int length = n,length2 = 0 ;  
     for(int i=0;i<m;i++){
         int flag = 0  ; 
         for(int j=0;j<n;j++){
               if(b[i] == a[j]) flag = 1 ;  
         }
           if(!flag) tmp[length++] = b[i]; 
     }
     sort(tmp,tmp+length); 
     for(int i=0;i<n;i++){
           int flag = 1  ; 
         for(int j=0;j<m;j++){
                if(a[i] == b[j] && flag){
                       oniron[length2++] = a[i] ; 
                       flag = 0 ;  
                }
         }
     }
     for(int i=0;i<length;i++){
         cout<<tmp[i]<<" ";
     }
     cout<<endl ; 
     for(int i=0;i<length2;i++){
         cout<<oniron[i]<<" "; 
     }
}
int main(){
  int t ; 
   cin>>t ;
   while(t--){
       solve(); 
   }
}