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
  int n,m;
    cin>>n>>m;
    map<int,int>mp;
    queue<int>q;
    int ar[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>ar[i];
        q.push(i);
    }
    int ans;
    while(!q.empty())
    {
        int z=q.front();
        ans = z+1;
        if(mp[z]+m >= ar[z])q.pop();
        else
        {
            q.pop();
            mp[z]+=m;
            q.push(z);
        }
 
    }
    cout<<ans<<endl;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
return 0;
}