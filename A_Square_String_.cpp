#include<bits/stdc++.h>
using namespace std;
void solve(){
    string s;
    cin>>s;
    int count=0;
   int mid=s.size()/2;
    // cout<<s.substr(0,mid)<<" ";
    // cout<<s.substr(mid,s.size()-1)<<endl;
    if(s.size()%2!=0){
        cout<<"NO"<<endl;
    }
    else {
        if(s.substr(0,mid)==s.substr(mid,s.size()-1)){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}