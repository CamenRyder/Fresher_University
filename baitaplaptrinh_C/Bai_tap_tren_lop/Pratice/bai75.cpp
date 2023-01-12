#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int n;
    cout << "- So luong Avenger tham gia choi: ";
    cin >> n;
    int a[5];
    int b[5] = {0};
    // for(int i = 0; i < n; i++){
    //     b[i] = true;
    // }
    cout << "- Bat dau chon so:\n";
    for(int i = 0; i < n; i++){
        cout << i << ": ";
        cin >> a[i];
    }

    // tim trung lap
    int flag = 0;
    for(int i = 0; i < n-1; i++)
	{
        if(b[i] == 0){
         for(int j = i+1; j < n; j++){
            if(b[j] == 0 && a[i] == a[j])
            {
                    b[j] = 1;
                    flag++;
                }
            }
         if(!flag){
             b[i] == 1;
             }
            flag = 0;
        }
    }
    for(int i = 0; i < n; i++){
        if(b[i] == 0){
            cout << a[i] << " ";
        }
    }
    return 0;
}