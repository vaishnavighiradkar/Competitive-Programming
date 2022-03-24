#include<bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin>>n;
    int v[n];
    for(int i=0;i<n;i++)
    {
        cin>>v[i];
    }
    map<int,int>freq;
    for(int i=0;i<n;i++){
        if (freq.find(v[i]) == freq.end()) {
            freq[v[i]] = 1;
        }
         else {
            freq[v[i]]++;
        }
    }
    int ans;
     map<int,int>::iterator it;
     for(it=freq.begin();it!=freq.end();it++){
         if(it->second==1){
             ans= it->first;
         }
     }
    for(int i=0;i<n;i++)
    {
        if(ans==v[i]){
            cout<<i+1<<endl;
            break;
        }
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}