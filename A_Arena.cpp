#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++)
    {
        int x;
        cin>>x;
        v.push_back(x);
    }
   int min=*min_element(v.begin(),v.end());
   int count=0;
   for(int i=0;i<n;i++)
{
    if(v[i]==min)
    {
        count++;
    }
}
cout<<n-count<<endl;
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