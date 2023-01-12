#include<iostream> 
using namespace std ;  
int n,a[100] ;  
void import(){
    cin>>n  ; 
    for(int i=0;i<n;i++){
        cin>>a[i] ; 
    }
}
void show(int z[]){
    for(int i=0;i<n;i++){
        cout<<z[i]<<" ";  
    }
}
void swap(int &a,int &b){
        int tmp =  a;   
        a = b ;  
        b = tmp;  
}
void Sort(){
    for(int i=0;i<n-1;i++){
             for(int j=i+1;j<n;j++){
                         if(a[i] < a[j]) 
                               swap(a[i],a[j]); 
             }
    }
}
void solve(){
      import() ;  
      Sort();  
      int tmp[100],q=0  ; 
      tmp[0] = a[q++];  
     int k = 1 ; 
      for(int i=1;i<n;i++){
            if(i%2 != 0){
               tmp[i]  =  a[n-k++] ;  
            }
            else {
                tmp[i] = a[q++] ; 
            } 
      }
      show(tmp); 
}
int main(){
        int t; 
        cin>>t ; 
         while(t--){
             solve(); 
         }
}