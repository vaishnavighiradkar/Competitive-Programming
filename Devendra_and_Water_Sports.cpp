#include<bits/stdc++.h>
using namespace std;
void solve(){
    int z,y,a,b,c;
    cin>>z>>y>>a>>b>>c;
    int m=(z-y);
    int n=a+b+c;
    if(m>=n){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}