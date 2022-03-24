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
    ll a,b;
    cin>>a>>b;
    int x=0;

    for(int i=1;i<a;i++)
    {
        x=x^i;
    }
    if(x==b) {cout<<a<<endl;}
    else if(x!=b){
        if((x^b)!=a) cout<<a+1<<endl;
        else if((x^b)==a) cout<<a+2<<endl;
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