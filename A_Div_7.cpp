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
    int n;
    cin>>n;
    if(n%7==0){
        cout<<n<<endl;
    }
    else {
        int k=n%10;
        int l=10-k;
       if(k==0){
           for(int i=n;i<=n+7;i++)
        {
            if(i%7==0){
                cout<<i<<endl;
                break;
            }
        }
       }
       else
        for(int i=n-k;i<=n+l;i++)
        {
            if(i%7==0){
                cout<<i<<endl;
                break;
            }
        }
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