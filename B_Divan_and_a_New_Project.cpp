#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    vector<ll>a(n);
    // int c[1000]={0};
    vector<ll>pos;
    ll b[n]={0};
    vector<pair<ll,ll>>p;
    vector<pair<ll,ll>>p2;
    ll k=1;
    for(ll i=0;i<2*n-1;i+=2)
    {
        pos.push_back(k);
        pos.push_back(-k);
        k++;
    }
    for(ll i=0;i<n;i++)
    {
        cin>>a[i];
        p2.push_back(make_pair(a[i],i));
    }
    sort(a.begin(),a.end());
    reverse(a.begin(),a.end());
    for(ll i=0;i<n;i++){
        p.push_back(make_pair(a[i],pos[i]));
    }
    ll ans=0;
    for(ll i=0;i<n;i++){
        ans+=abs(0-pos[i])*a[i];
    }
    cout<<ans*2<<endl;
    cout<<0<<" ";
    sort(p.begin(),p.end());
    sort(p2.begin(),p2.end());
    
    for(ll i=0;i<p.size();i++)
    {
        b[p2[i].second]=p[i].second;
    }
    for(ll i=0;i<p2.size();i++)
    {
        // cout<<p2[i].first<<" "<<p2[i].second<<" ";
        cout<<b[i]<<" ";
    }

    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}