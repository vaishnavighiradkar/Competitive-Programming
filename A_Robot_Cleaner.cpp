#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n,m,a,b,x,y;
    cin>>n>>m>>a>>b>>x>>y;
    int count=0;
    int da=1,db=1;
    while(a!=x&&b!=y){
            if(a+da>n||a+da<1) {da*=-1;}
            if(b+db>m||b+db<1) {db*=-1;}
            a+=da;
            b+=db;
           count++;
    }
           
    cout<<count<<endl;
}
int main()
{
    int t;
    cin>>t;
   while(t--){
       solve();
   }
}