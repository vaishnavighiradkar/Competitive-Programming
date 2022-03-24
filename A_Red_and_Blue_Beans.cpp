#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll r,b,d;
    cin>>r>>b>>d;
    if(min(r,b)*(d+1)>=max(r,b) ){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
   
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