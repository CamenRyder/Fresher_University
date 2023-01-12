#include<iostream>
using namespace std ;
void solve(){
   long long b,p,res = 0 ; 
   cin>>b>>p ; 
   for(long long x=1;x<=p;x++){
       if(x*x%p==1){
           long long last = x+(b/p)*p ; 
           if(last>b) last-=p ;
           res+=((last-x)/p+1);
       }
   } 
   cout<<res<<endl ;
}
int main(){
    int t=1;
    cin>> t; 
    while(t--) solve();
}
// vì đọc đề xong quá ngán nên mink qd k làm bài này, skipp thuizzz ¯\_(ツ)_/¯ 
// đề tìm số nghiệm của phương trình đồng dư x^2 = 1(mod) p trong khoảng [1,b]
//ví dụ với b=5,p=7 ta tìm được x = 1C[1,5] để x^2 = 1%7=1. Với b=8,p=6 ta tìm
//được x = {1,5,7} để x^2 = 1(mod 7).
 // 6%1 = 38%1 = 34%1 = 0; 6%2=38%2=34%2=0;6%4=38%4=34%4=2 ; 
 // Input: 
    // Dòng đầu tiên đưa vào số lượng Test T.
    // Những dòng kế tiếp đưa vào các bộ têst. Mỗi test là bộ đôi b,p.Các só
// được viết các nhau một vài khoảng trống.
    // T,b,p thỏa mãn ràng buộc: 1<=T<=100;0<=b<=10^9; 1<-p<-10^5 ; 
    // Output: 
    // đưa ra số các số kết quả mỗi test theo từng dòng.
    //+----------------------------+----------------------------------------+
    //| Input:                     | Output:                                |
    //| 2                          | 1                                      |
    //|5 7                         | 3                                      |
    //|8 6                         |                                        |
    //+----------------------------+----------------------------------------+