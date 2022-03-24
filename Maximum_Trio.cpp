#include<bits/stdc++.h>
using namespace std;
#define ll long long int 
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int ai,aj,ak;
        ai=v[n-1];
        ak=v[n-2];
        aj=v[0];
        cout<<(ai-aj)*ak<<endl;
    }
}