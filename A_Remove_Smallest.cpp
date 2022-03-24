#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
        vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    bool flag=true;
    sort(a.begin(),a.end());
    for(int i=1;i<n;i++){
        if((a[i]-a[i-1])>1){
            v.push_back(a[i]-a[i-1]);
        }
    }
    for(int i=0;i<v.size();i++)
    {
        if(v[i]>1) 
        flag=false;
        break;
    }
    if(flag==true){
        cout<<"YES"<<endl;
    }
    else {cout<<"NO"<<endl;}
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