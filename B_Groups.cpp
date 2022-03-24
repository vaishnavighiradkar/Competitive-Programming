#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
ll mod = 1000000007;
ll power(ll a, ll b)
{ // a raised to power b
    ll res = 1;
    while (b)
    {
        if (b & 1)
            res = (res * a) % mod;
        b >>= 1;
        a = (a * a) % mod;
    }
    return res;
}
void solve()
{
    int n;
    cin >> n;
    ll a[n][5];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < 5; j++)
            cin >> a[i][j];
    }
    bool ok = 0;
    for (int i = 0; i < 4; i++)
    {
        for (int j = i + 1; j < 5; j++)
        {
            ll f = 0, s = 0, b = 0;
            for (int k = 0; k < n; k++)
            {
                if (a[k][i] == 1 && a[k][j] == 1)
                    b++;
                else if (a[k][i] == 1)
                    f++;
                else if (a[k][j] == 1)
                    s++;
            }
            ll k = n / 2 - f, p = n / 2 - s;
            if (k >= 0 && p >= 0 && b == k + p)
            {
                ok = 1;
                break;
            }
        }
        if (ok == 1)
            break;
    }
    if (ok)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}