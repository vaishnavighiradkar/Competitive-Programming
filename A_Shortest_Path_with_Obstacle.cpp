#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int x[3],y[3];
    for(int i=0;i<3;i++)
    {
        cin>>x[i]>>y[i];
    }
    int ans=abs(x[0]-x[1])+abs(y[0]-y[1]);
    if((x[0]==x[1]&&x[1]==x[2]&&min(y[1],y[0])<y[2]&&y[2]<max(y[0],y[1]))||(y[0]==y[1]&&y[1]==y[2]&&min(x[1],x[0])<x[2]&&x[2]<max(x[0],x[1])))
    {
        ans+=2;
    }
    cout<<ans<<endl;

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