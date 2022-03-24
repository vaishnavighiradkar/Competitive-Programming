#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll M=1000000007;
// void solve(){
//     ll n;
//     cin>>n;
//     ll ans=1;
//     if(n==1){
//         cout<<1<<endl;
//     }
//     else 
//     for(int i=3;i<=2*n;i++)
//     {
//         ans=(ans*i)%M;
//     }
//     cout<<ans/2<<endl;
// }
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
         ll n;
    cin>>n;
    ll ans=1;
    // if(n==1){
    //     cout<<1<<endl;
    // }
    // else 
    for(int i=3;i<=2*n;i++)
    {
        ans=(ans*i)%M;
    }
    cout<<ans<<endl;
    }
return 0;
}