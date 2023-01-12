#include <bits/stdc++.h>
using namespace std;
void multi(int a[], int n, int b[], int &m)
{
    int k = 0;
    while (k < 2)
    {
        for (int i = 0; i < n; i++)
        {
            b[m++] = a[i];
        }
        k++;
    }
}
void display(int a[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}
int main()
{
    int a[] = {1, 2, 3, 4};
    int b[100], m = 0;
    int n = sizeof(a) / sizeof(a[0]);
    multi(a, n, b, m);
    cout << endl;
    display(b, m);
}