#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        ll n,l,r,k;
        cin>>n>>l>>r>>k;
        int a[n];
        vector<int>v;
        vector<int>v1;
        int sum=0,ans=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]<l||a[i]>r){
                v1.push_back(a[i]);
            }
            else{
                v.push_back(a[i]);
            }
        }
        // for(int i=0;i<v.size();i++){
        //     cout<<v[i]<<" ";
        // }

        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            sum+=v[i];
            if(sum==k){
                ans=i+1;
                break;
            }
            else if(sum>k){
                ans=i;
                break;
            }
            else {
                ans=i+1;
                continue;
            }
        }
        cout<<ans<<endl;

    }
}