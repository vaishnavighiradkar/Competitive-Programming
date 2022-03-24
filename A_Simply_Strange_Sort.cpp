#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    vector<int> a(n);
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    while (!is_sorted(a.begin(), a.end()))
    {
        for (int i = ans % 2; i + 1 < n; i += 2)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }
        }
        ans += 1;
    }
    cout << ans << endl;
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