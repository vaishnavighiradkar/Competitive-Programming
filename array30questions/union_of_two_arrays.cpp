#include<bits/stdc++.h>
using namespace std;
int do_union(int a[],int b[],int n,int m){
    vector<int>v;
    for(int i=0;i<n;i++){
        v.push_back(a[i]);
    }
    for(int i=0;i<m;i++){
        v.push_back(b[i]);
    }
    map<int,int>freq;
    for(int i=0;i<v.size();i++){
        if (freq.find(v[i]) == freq.end()) {
            freq[v[i]] = 1;
        }
         else {
            freq[v[i]]++;
        }
    }
    return freq.size();
}
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n],b[m];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<m;i++){
        cin>>b[i];
    }
    cout<<do_union(a,b,n,m);
}