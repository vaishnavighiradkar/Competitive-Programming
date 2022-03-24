#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    vector<int>v;
    vector<pair<int,int>>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    vector<int>l;
    vector<int>r;
    for(int i=0;i<n-1;i++){
       for(int j=i+1;j<n;j++){
           if(v[i]==v[j]){
               a.push_back({i+1,j+1});
           }
       }
    }
    for(int i=0;i<n;i++){
        cout<<a[i].first<<" "<<a[i].second<<endl;
    } cout<<endl;
    
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