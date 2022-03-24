#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    vector<ll>a;
    for(ll i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    for(ll i=1;i<=floor(n/2);i++)
    {
        cout<<a[i]<<" "<<a[0]<<endl;
    }
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
