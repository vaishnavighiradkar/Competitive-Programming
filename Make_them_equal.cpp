#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        bool flag=false;
        vector<int>v;
        for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
        }
        sort(v.begin(),v.end());
            cout<<v[v.size()-1]-v[0]<<endl;
        
    }
}