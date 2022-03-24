#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    ll l,r;
    cin>>l>>r;
    if(r%2==0){
        if(l>r/2){
            cout<<r%l<<endl;
        }
        else
        cout<<r/2-1<<endl;
    }
    else{
        if(l>r/2){
            cout<<r%l<<endl;
        }
        else cout<<r/2<<endl;
    } 
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