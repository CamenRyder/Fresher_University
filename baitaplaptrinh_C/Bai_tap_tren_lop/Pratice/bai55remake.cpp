
using namespace std ; 
typedef struct data{
    int value,local ;  
}data; 
bool cmp(data a,data b){
	if(a.value < b.value) return true ; 
	else if(a.value == b.value && a.local < b.local) return true ; 
	return false ; 
}
void solve(){
    int n ; 
    cin>>n  ; 
    vector<data>a(n); 
    for(int i=0;i<n;i++){
    	  cin>>a[i].value;
		  a[i].local = i;   
	}
	sort(a.begin(),a.end(),cmp); 
	int res = 0 ;  
	for(int i =0 ;i<n;i++){
		while(a[i].local!=i){
			res++ ;  
			swap(a[i],a[a[i].local]);
		}
	} 
	cout<<res<<endl ; 
}
int main(){
   int t ; 
   cin>>t ;
   while(t--){
       solve(); 
   }
}