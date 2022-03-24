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
int dp[1001][1001];
int lcs(string& s1, string& s2, int i, int j)
{
    if (i == 0 || j == 0) {
        return 0;
    }
    if (dp[i][j] != -1) {
        return dp[i][j];
    }
    if (s1[i - 1] == s2[j - 1]) {
        return dp[i][j] = 1 + lcs(s1, s2, i - 1, j - 1);
    }
    else {
        return dp[i][j] = max(lcs(s1, s2, i, j - 1), lcs(s1, s2, i - 1, j));
    }
}
int printMinDelAndInsert(string str1, string str2)
{
    int ans;
    int m = str1.size();
    int n = str2.size();
 
    dp[m][n];
 
    memset(dp, -1, sizeof(dp));
 
    int len = lcs(str1, str2, m, n);
 
    ans= (m - len);

  return ans;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
         string k,p;
    cin>>k>>p;
    int l1,l2,count=0,m=-1;
    l1=k.length();
    l2=p.length();
    if(l1>l2){
        cout<<"Case #"<<i+1<<": ";
        cout<<"IMPOSSIBLE"<<endl;
    }
    else if(l1==l2){
        if(k.compare(p)==0){
            cout<<"Case #"<<i+1<<": ";
            cout<<"0"<<endl;
        }
        else 
        {
            cout<<"Case #"<<i+1<<": ";
            cout<<"IMPOSSIBLE"<<endl;
        }
    }
     else if(l2>l1)
    {
      int ans1=printMinDelAndInsert( k, p);
      cout<<"Case #"<<i+1<<": ";
      cout<<ans1<<endl;
    }
    }
return 0;
}