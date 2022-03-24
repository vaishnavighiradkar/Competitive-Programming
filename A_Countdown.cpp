#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>v;
   int  count=0;
   for(int i=0;i<s.size();i++)
   {
       v.push_back(s[i]);
   }
   for(int i=0;i<v.size();i++)
   {
       v[i]=v[i]-48;
   }
    for(int i=0;i<v.size()-1;i++)
   {
       if(v[i]!=0){
           count++;
           count+=v[i];
       }
   }
cout<<count+v[v.size()-1];
   cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}