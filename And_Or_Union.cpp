#include<bits/stdc++.h>
using namespace std;
void solve()
{
    vector<int>a;
    int n,m;
    cin>>n;
    int v[32]={0};
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        for(int j=0;j<32;j++){
            m=a[i]>>j;
            if(m&1)
            {
                v[j]++;
            }
        }
    }
    int ans=0;
    for(int i=0;i<32;i++){
        if(v[i]>1){
            ans+=pow(2,i);
        }
    }
    cout<<ans<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}