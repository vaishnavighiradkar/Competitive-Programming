#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int x;
    cin>>x;
    vector<int>s;
    while(x!=0){
        s.push_back(x%10);
        x=x/10;
    }
    reverse(s.begin(),s.end());
    int m=0;
    vector<int>v;
    for(int i=0;i<s.size()-1;i++)
    {
       v.push_back(s[i]+s[i+1]);
    } 
    // cout<<m<<endl;

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