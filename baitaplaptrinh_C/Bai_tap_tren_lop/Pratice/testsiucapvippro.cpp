#include<iostream>
#include<String>
using namespace std ; 
int main(){
	string a  ; 
	getline(cin,a);
	int  f0   =  0 ;  
	int fn,dem ;  
	int count = 0  ;   
	int max = 0 ;  
	int dodai = a.length() ;
	for(int i=0;i< dodai; i++){
		fn = i  ;
		    if(a[i] == ' ' && a[i+1] != ' ' ) { 
		              int flag = 0  ; 
					  dem = 0 ; 
		    	   for(int j=f0;j<fn;j++){
		    	   	     if(a[j] != ' '){
		    	   	     	cout<<a[j] ; 
		    	   	     	dem = dem +1  ;  
		    	   	     	flag = 1 ;  
							} 
							if(dem > max) max = dem ;  
				   }
				  f0 = i+1 ; 
				  if(flag) 
				  {
				  	cout<<endl ;  
				  	count++ ;  
				  } 
			}
	}  
	dem = 0  ;
	if (a[f0] != ' '){ 
	for(int i=f0;i<dodai;i++){
		if(a[i] != ' '){
		cout<<a[i]; 
	      dem++ ; 
	} 
}
	if(dem > max) max = dem  ; 
	}else {
	cout<<(count)<<endl<<max ; 
	return 0 ; 
}
	cout<<endl<<(count+1)<<endl<<max ; 	
}