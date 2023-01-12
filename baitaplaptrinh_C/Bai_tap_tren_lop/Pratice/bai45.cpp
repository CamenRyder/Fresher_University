#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string Sum(string a, string b)
{
    string res = "";
    while (a.length() < b.length())
        a = "0" + a;
    while (a.length() > b.length())
        b = "0" + b;
    for (int i = a.length() - 1; i > 0; i--)
    {
        if (a[i] + b[i] - 2 * '0' < 10)
            res = char(a[i] + b[i] - '0') + res;
        else
        {
            res = char(a[i] + b[i] - 10 - '0') + res;
            a[i - 1]++;
        }
    }
    if (a[0] + b[0] - 2 * '0' < 10)
        res = char(a[0] + b[0] - '0') + res;
    else
    {
        res = char(a[0] + b[0] - '0' - 10) + res;
        res = "1" + res;
    }
    return res;
}
string multi(string a, char b)
{
    string res1 = "", res2 = "";
    int tmp, carry = 0;

    for (int j = a.length() - 1; j > 0; j--)
    {
        tmp = ((a[j] - 48) * (b - 48)) + carry;
        carry = tmp / 10;
        tmp = tmp % 10;
        res1 = char(tmp + 48) + res1;
    }
    // if ((b - 48) * (a[0] - 48) < 10)
    // {
    //     tmp = ((a[0] - 48) * (b - 48)) + carry;
    //     carry = tmp / 10;
    //     tmp = tmp % 10;
    //     res1 = char(tmp + 48) + res1;
    // }
    // else
    // {
    tmp = ((a[0] - 48) * (b - 48)) + carry;
    carry = tmp / 10;
    tmp = tmp % 10;
    res1 = char(tmp + 48) + res1;
    res1 = char(carry + 48) + res1;
    // }
    return res1;
}
void solve()
{
    string a, b;
    cin >> a >> b;
    int count = 1;
    if (a.length() < b.length())
        swap(a, b);
    string res = multi(a, b[b.length() - 1]);
    string res2;
    for (int i = b.length() - 2; i >= 0; i--)
    {
        res2 = multi(a, b[i]);
        for (int z = 0; z < count; z++)
            res2 = res2 + "0";
        res = Sum(res, res2);
        count++;
    }
     // if (res[0] == '0') res.erase(0); 
    cout << res;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}