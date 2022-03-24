#include<bits/stdc++.h>
using namespace std;
void find_duplicates(string v)
{
   map<char,int>freq;
   int n=v.size();
   vector<char>a;
  for(int i=0;i<n;i++){
        if (freq.find(v[i]) == freq.end()) {
            freq[v[i]] = 1;
        }
         else {
            freq[v[i]]++;
        }
    }
    map<char,int>::iterator it;
    for(it=freq.begin();it!=freq.end();it++)
    {
        if(it->second>1){
            a.push_back(it->first);
        }
    }
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
int main()
{
    string s;
    cin>>s;
    find_duplicates(s);
}