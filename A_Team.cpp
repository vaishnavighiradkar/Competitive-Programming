#include<bits/stdc++.h>
using namespace std;
int solve(){
    int a,b,c;
    int count=0;
    cin>>a>>b>>c;
    if(a==0&&b==0||a==0&&c==0||b==0&&c==0||a==0&&b==0&&c==0){
        count=0;
    }
    else count+=1;
    return count;}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    int ans=0;
    while(t--)
    {
    ans+=solve();
    
    }cout<<ans<<endl;
return 0;
}