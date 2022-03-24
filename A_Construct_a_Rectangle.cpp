#include<bits/stdc++.h>
using namespace std;
void solve()
{
      vector<int>a;
    for(int i=0;i<3;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    sort(a.begin(),a.end());
    if(a[0]+a[1]==a[2]){
        cout<<"YES"<<endl;
    }
    else if(a[1]==a[2]){
        if(a[0]%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
    }
    else if(a[1]==a[0]){
        if(a[2]%2==0){
            cout<<"YES"<<endl;
        }
        else cout<<"NO"<<endl;
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