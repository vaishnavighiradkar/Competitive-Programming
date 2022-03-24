#include<bits/stdc++.h>
using namespace std;
int find_duplicate(int n,int v[]){
    map<int,int>freq;
    for(int i=0;i<n;i++){
        if (freq.find(v[i]) == freq.end()) {
            freq[v[i]] = 1;
        }
         else {
            freq[v[i]]++;
        }
    }
    int ans=0;
     map<int,int>::iterator it;
     for(it=freq.begin();it!=freq.end();it++){
         if(it->second==2){
             ans= it->first;
         }
     }
     return ans;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cout<<find_duplicate(n,a);
}