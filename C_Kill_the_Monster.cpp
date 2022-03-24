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
    ll hc, hm, dc, dm, k, w, a, c, m;
    cin >> hc >> dc >> hm >> dm >> k >> w >> a;
    bool flag=false;
      for(ll i = 0; i <= k; i++){
            ll x = i;
            ll c = dc + (w*x);
            ll m = hc + (a * (k-x));
            ll p = hm/c;
            ll q = m/dm;
            if(hm%c){
                p++;
            }
            if(m%dm){
                q++;
            }
            
            if(p <= q){
                flag = true;
                break;
            }
        }

        if(flag){
            cout << "YES" << "\n";
        }else{
            cout << "NO" << "\n";
        }
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