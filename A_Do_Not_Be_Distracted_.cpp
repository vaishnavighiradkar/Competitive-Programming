#include<bits/stdc++.h>
using namespace std;
void find_duplicate(vector<char> v){
    map<int,int>freq;
    bool flag=true;
    for(int i=0;i<v.size();i++){
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
         if(it->second>=2){
             flag=false;
         }
     }
     if(flag==false)
     {
         cout<<"NO"<<endl;
     }
     else cout<<"YES"<<endl;
}
void solve(){
    int n;
    cin>>n;
   string s;
   cin>>s;
   char a[n];
   for(int i=0;i<s.size();i++)
   {
       a[i]=(s[i]);
   }
   vector<char>v;
   for(int i=0;i<n;i++)
   {
       if(a[i+1]!=a[i])
       {
           v.push_back(a[i]);
       }
       
   }
//    for(int i=0;i<v.size();i++)
//    {
//        cout<<v[i]<<" ";
//    } cout<<endl;
find_duplicate(v);
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}