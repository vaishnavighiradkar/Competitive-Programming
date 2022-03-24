#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n,i;
    cin>>n>>i;
    int f=1;
    f=f<<i;
    int res=n&f;
    if(res==0)
    {
        cout<<"no"<<endl;
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
return 0;
}