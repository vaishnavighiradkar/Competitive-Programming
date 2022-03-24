#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
ll mod = 1000000007;
#define pb push_back
#define mp make_pair
#define fl(i, n) for (int i = 0; i < n; i++)
#define rl(i, m, n) for (int i = n; i >= m; i--)
#define pi 3.141592653589793238
#define vr(v) v.begin(), v.end()
#define rv(v) v.end(), v.begin()
void solve()
{
   ll n;cin>>n;
    string s;cin>>s;
    ll o=0,t=0;
    unordered_set<ll> type1,type2;
    for(int i=0;i<n;i++){
        if(s[i]=='1') {
            o++;type1.insert(i);
        }
        else {
            t++;type2.insert(i);
        }
    }
    if(n==2 && o==t) {
       cout<<"NO"<<endl;
       return;
    }
    char a[n][n];
    for(int i=0;i<n;i++) 
    for(int j=0;j<n;j++) {
        if(i==j) a[i][j]='X';
        else a[i][j]='=';
    }
     
     bool ok=1;
     for(int i=0;i<n;i++)
    {
        if(type2.count(i)){
            ll possible = 0;
            for(int j=0;j<n;j++)
            {
                if(i!=j) {
                    if(s[j]=='2')
                    {
                        if(a[j][i]!='+'){
                            a[i][j] = '+'; a[j][i] = '-';
                            possible = 1; break;
                        }
                    }
                }
            }
            if(possible==0){
                ok = 0;break;
            }
        }
    }
    if(ok==0) {
        cout<<"NO"<<endl;return;
    }
    else{
        cout<<"YES"<<endl;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++) cout<<a[i][j];
            cout<<endl;
        }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}