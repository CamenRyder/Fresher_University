#include <bits/stdc++.h>
using namespace std;
void solve()
{
    char a;
    cin >> a;
    int n;
    cin >> n;
    for (int j = 0; j < n; j++)
    {
        for (int i = 0; i < n; i++)
        {
            cout << " ";
            if (i == (n - j))
            {
                for (int z = 0 ; z < j; z++)
                {
                    cout << a ;
                }
            }
        }
        cout << endl;
    }
    cout<<" ";
    for(int i=0;i<n;i++)
       cout<<a ; 
}
int main()
{
    int t;
    cin >> t;
    while (t--)
        solve();
}