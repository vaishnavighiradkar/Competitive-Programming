#include<bits/stdc++.h>
using namespace std;
void solve(int n,int a[]){
map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        if(a[i]==0){
            m[0]++;
        }
       else if(a[i]==1){
            m[1]++;
        }
       else if(a[i]==2){
            m[2]++;
        }
    }
    // cout<<m[0]<<" "<<m[1]<<" "<<m[2]<<" ";
    vector<int>v;
    for(int i=1;i<=m[0];i++){
        v.push_back(0);
    }
    for(int i=m[0]+1;i<=(m[1]+m[0]);i++){
        v.push_back(1);
    }
    for(int i=m[1]+m[0]+1;i<=n;i++){
        v.push_back(2);
    }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    solve(n,a);
}