#include<bits/stdc++.h>
using namespace std;
#define pb push_back
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    int p;
    cin>>p;
    for(int i=0;i<p;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    int q;
    cin>>q;
     for(int i=0;i<q;i++){
        int x;
        cin>>x;
        v.pb(x);
    }
    sort(v.begin(),v.end());
    vector<int>::iterator ip;
    ip = std::unique(v.begin(), v.end());
    v.resize(std::distance(v.begin(), ip));
    if(v.size()==n) cout<<"I become the guy."<<endl;
    else cout<<"Oh, my keyboard!"<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    solve();
return 0;
}