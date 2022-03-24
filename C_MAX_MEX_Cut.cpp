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
    string s1,s2;
    cin>>s1>>s2;
    int count=0;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        if(s1[i]=='0'&&s2[i]=='0')
        {
            v.push_back(1);
        }
        else if((s1[i]=='0'&&s2[i]=='1')||(s1[i]=='1'&&s2[i]=='0'))
        {
            v.push_back(2);
        }
        else if(s1[i]=='1'&&s2[i]=='1'&&((s1[i+1]=='0'&&s2[i+1]=='0')||(s1[i-1]=='0'&&s2[i-1]=='0')))
        { i++;
            v.push_back(2);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        count+=v[i];
    }
    cout<<count<<endl;
    
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