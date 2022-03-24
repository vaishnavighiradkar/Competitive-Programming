#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll n;
    cin>>n;
    vector<ll>v(n);
    for(ll i=0;i<n;i++)
    {
        cin>>v[i];
    }
    if(n==1){
        cout<<v[0]<<endl;
    }
    else {
    sort(v.begin(),v.end());
    vector<ll>k;
    k.push_back(v[0]);
    for(ll i=1;i<n;i++){
        k.push_back(v[i]-v[i-1]);
    }
    cout<<*max_element(k.begin(),k.end())<<endl;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}