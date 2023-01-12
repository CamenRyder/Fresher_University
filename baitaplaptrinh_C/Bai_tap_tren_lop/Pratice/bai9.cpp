#include<iostream>
#include<math.h>
using namespace std; 
int GCF(int a,int b){ // stands for greatest common factor 
    a = abs(a);       // tiếng việt là Ước chung lớn nhât! 
    b = abs(b);
    while(a!=b){
        if(a>b) a-=b ;
        else b-=a; 
    }
    return a;
}
int LCM(int  a,int b){    // stands for  lowest common multiple
    return  a*b/(GCF(a,b));   // tiếng việt là bội chung nhỏ nhất! 
}
void GCFandLCM(){
    int a ,b ; 
    cout<< "\nNhap a va b: "; 
    cin>>a>>b ; 
    cout<<"Boi chung nho nhat: "<<LCM(a,b)<<endl; 
    cout<<"Uoc chung lon nhat: "<<GCF(a,b)<<endl ; 
}
int main(){
    int j ; 
    cin>>j ; 
    while(j--){
          GCFandLCM();
    } 
}