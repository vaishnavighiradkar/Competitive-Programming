#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int sum=0;
        for(int i=0;i<n;i++){
            if(i!=0){
                sum=sum+v[i];
            }
        }
        cout<<sum<<endl;
    }
}