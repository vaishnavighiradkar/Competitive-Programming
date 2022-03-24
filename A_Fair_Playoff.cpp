#include<bits/stdc++.h>
using namespace std;
void solve(){
vector<int>v;
    for(int i=0;i<4;i++)    
    {
    int x;
    cin>>x;
    v.push_back(x);
    }
    int k1,k2;
    k1=max(v[0],v[1]);
    k2=max(v[2],v[3]);
    // cout<<k1<<" "<<k2<<endl;
    sort(v.begin(),v.end());
    // for(int i=0;i<4;i++)    
    // {
    //     cout<<v[i]<<" ";
    // }
    // cout<<endl;
    if((k1==v[2]&&k2==v[3])||(k1==v[3]&&k2==v[2]))
    {
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}