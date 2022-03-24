#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n, l;
    cin >> n >> l;
    int ar[n];
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
    }

    long ans = (1L << l) - 1;
    for (int i = 0; i < l; i++)
    {
        long c = 0;
        for (int j = 0; j < n; j++)
        {
            if (((1L << i) & ar[j]) == 0)
                c++;
        }
        if ((2 * c) > n)
        {
            ans = (ans & (~(1L << i)));
        }
    }
    cout << ans<<endl;

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