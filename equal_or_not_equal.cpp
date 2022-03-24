#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int e=0,n=0;
for(int i=0;i<s.size();i++)
{
    if(s[i]=='E')
    {
        e++;
    }
    else n++;
}
if(n==1){
    cout<<"NO"<<endl;
}
else cout<<"YES"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}