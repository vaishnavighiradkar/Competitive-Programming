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
    ll n,x,t;
    cin>>n>>x>>t;
    ll z=t/x;
    ll a;
    if(n>=z){
             a=z*(z+1)/2;
             cout<<n*z-a<<endl;
    }
    else if(n<z) {
        cout<<n*(n-1)/2<<endl;
    }
    

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int k;
    cin>>k;
    while(k--)
    {
    solve();
    }
return 0;
}