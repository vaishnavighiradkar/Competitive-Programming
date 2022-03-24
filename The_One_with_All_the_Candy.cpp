#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
       ll ans = v[0]*n;
    ll pos = n;
    ll c = v[0];
    for(ll i=0;i<n;i++) {
        v[i]-=c;
        if(v[i]>0)
        {
            pos = i;
            break;
        }
    }
    ans+=(n-pos);
    cout<<ans<<endl;

    }
}