#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    string ans;
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='L') ans.push_back('L');
        else if(s[i]=='R') ans.push_back('R');
        else if(s[i]=='U') ans.push_back('D');
        else if(s[i]=='D') ans.push_back('U');
    }
    cout<<ans<<endl;
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