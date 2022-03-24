#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
            cin>>a[i];
        map<int,int> map;
 
        for(int i=0;i<n;i++)
        {
            int k=a[i];
            while(k>0)
            {
                if(1<=k&&k<=n&&map[k]==0)
                {
                    map[k]=1;
                    break;
                }
                k=k/2;
            }
 
        }
        int flag=0;
        for(int i=1;i<=n;i++)
            {
                if(map[i]!=1)
                    flag=1;
            }
 
            if(flag)
                cout<<"NO"<<endl;
            else
                cout<<"YES"<<endl;
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