#include <iostream>
#include<algorithm>
using namespace std;
void  solve(){ 
  int a[100],c[100] ;  

    for(int i=0;i<100;i++){
        a[i] = 0 ; 
        c[i] = 0 ;  
     } 
      int n ; 
      cin>> n ; 
      int b[100]; 
      for(int i=0;i<n;i++){
            cin>>b[i] ; 
      } 
      for(int i=0;i<n;i++){
      	    if(a[b[i]] == 0) a[b[i]] = 1 ; 
      	    else c[b[i]] = 1 ;  
	  }
      int min = 1000000  ; 
      for(int i=0;i< 100 ;i++){
              if(a[i] != c[i] && a[i] != 0 && a[i] < min) {
                      min = a[i]   ;              
                    }
      }
      if(min == 1000000 ) {
          cout<<"-1" ;  
         return   ; 
      }
    for(int i=0;i<n;i++)
        if(b[i] == min ) {
            cout<<(i+1)<<" ";  
            return ;   
        }
}
int main()
{  
     int t   ;
     cin>>t ;
     while(t--)
      solve();  
    return 0;
}