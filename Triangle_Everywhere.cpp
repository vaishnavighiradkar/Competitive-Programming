#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
ll mod = 1000000007;
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
void solve()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        if (a == b && b == c)
            cout << 1 << endl;
        else if ((a != b) && (b != c) && (c != a))
            cout << 3 << endl;
        else
            cout << 2 << endl;
    }
    else
        cout << "-1" << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();

    return 0;
}