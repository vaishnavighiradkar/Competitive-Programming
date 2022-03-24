#include <bits/stdc++.h>
using namespace std;
#define ll long long
void solve()
{
    ll n;
    cin >> n;
    vector<ll> a;
    ll count=0;
    for (ll i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        a.push_back(x);
        while(a[i]%2==0){
            count++;
            a[i]/=2;
        }
    } ll ans=0;
    sort(a.begin(),a.end());
    for(ll i=1;i<=count;i++)
    {
        a.back()*=2;
    }
    for(ll i=0;i<n;i++){
        ans+=a[i];
    }
    cout<<ans<<endl;
    
   
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
 
    return 0;
}