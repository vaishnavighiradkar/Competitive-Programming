#include<bits/stdc++.h>
using namespace std;
#define ll long long
void solve(){
    ll p,a,b,c;
    cin>>p>>a>>b>>c;
    ll a1=abs(a-p%a);
    ll b1=abs(b-p%b);
    ll c1=abs(c-p%c);
    ll m1=min(a1,b1);
    ll m2=min(m1,c1);
    if(p%a==0||p%b==0||p%c==0){
        cout<<"0"<<endl;
    }
    else     cout<<m2<<endl;

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