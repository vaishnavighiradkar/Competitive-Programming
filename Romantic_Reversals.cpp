#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>v1;
        vector<int>v2;
        vector<int>v;
        for(int i=0;i<n;i++){
            if(i<k){
                v1.push_back(a[i]);
            }
            else v2.push_back(a[i]);
        }
        if(k%2==0){
            for(int i=k;i>1;i-=2){
                v.push_back(v1[i]);
            }
        }




        for(int i=0;i<v2.size();i++){
            cout<<v2[i]<<" ";
        }cout<<endl;
    }
}