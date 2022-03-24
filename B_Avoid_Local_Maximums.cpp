#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
ll mod=1000000007;
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
void solve(){
    ll n;
    cin>>n;
    vector<ll>v;
    for(ll i=0;i<n;i++){
        ll x;
        cin>>x;
        v.pb(x);
    }
    ll num=0;
    // int g_maxima=*max_element(v.begin(),v.end());
     
    for(ll i=1;i<n-1;i++){
           if (v[i]>v[i-1]&&v[i]>v[i+1])
           {
              ll k;
               if(i+2<n){
                   k=v[i+2];
               }
               else k=INT_MIN;
               v[i+1]=max(v[i],k);
                num++;
            }
    }
    cout<<num<<endl;
    for(ll i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;
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