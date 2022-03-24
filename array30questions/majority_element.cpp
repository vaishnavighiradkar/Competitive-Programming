#include<bits/stdc++.h>
using namespace std;
vector<int> find_duplicate(vector<int>v){
    map<int,int>freq;
    for(int i=0;i<v.size();i++){
        if (freq.find(v[i]) == freq.end()) {
            freq[v[i]] = 1;
        }
         else {
            freq[v[i]]++;
        }
    }
    vector<int>ans;
     map<int,int>::iterator it;
     for(it=freq.begin();it!=freq.end();it++){
         if(it->second>(v.size()/3)){
             ans.push_back(it->first);
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
}