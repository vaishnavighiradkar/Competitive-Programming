#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a,b,c;
    cin>>a>>b>>c;
    int l=2*b;
    int r=a+c;
    if(l==r){
        cout<<"YES"<<endl;
    }
    else if(l>r){
        if((l-c)%a==0||(l-a)%c==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(l<r){
        if(r%l==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
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