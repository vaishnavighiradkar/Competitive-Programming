#include <bits/stdc++.h>

using namespace std;
bool issorted(vector<int>v,int n){
    bool k=true;
    vector<int>s;
    for(int i=0;i<n;i++){
        s.push_back(v[i]);
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(v[i]!=s[i]){
            k=false;
        }
    }
    if(k==false){
        return false;
    }
    else return true;
}

int main()
{
   int t;
   cin>>t;
   while(t--)
   {
       int n;
       cin>>n;
       vector<int>v(n);
       for(int i=0;i<n;i++){
           cin>>v[i];
       }
       if(issorted(v,n)==true){
           cout<<"NO"<<endl;
       }
       else cout<<"YES"<<endl;
   }
}