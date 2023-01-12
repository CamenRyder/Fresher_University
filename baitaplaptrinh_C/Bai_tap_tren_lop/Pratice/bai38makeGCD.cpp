#include<iostream>
#include<algorithm>
using namespace std ;
const int N = 100 ; 
void solve(){
    int i,n,count=0;cin>>n ;
    int a[N] ; 
    for(i=0;i<n;i++)
        cin>>a[i];
    int Min = 1e4 ; 
    for(i=0;i<n;i++)
        Min = min(Min,a[i]);
        int ucln = a[0]-Min ; 
    for(int i=0;i<n;i++) ucln = __gcd(ucln,a[i]-Min);  // mingw của visual ko nhận hàm này k p sai đâu :) để qa dev C hay Vs studio vẫn nhận nhaa 
    for(int i=0;i<=ucln;i++){
    	 if(ucln%i==0) count++ ; 
	}
	cout<<count<<endl ; 
}
int main(){
    int t ;
    cin>>t;
    while(t--){
        solve(); 
    }
} 
// nhma hinh nhu code nay k chay chac do tui copy sai o dau do :v
