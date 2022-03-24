#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
     cin>>t;
     while(t--){
         int n;
         cin>>n;
        vector<pair<int,int>>v;
         for(int i=0;i<n;i++)
         {
            cin>>v[i].first;
            v[i].second=0;
         } 
         int dis=0,k=1;
         sort(v.begin(),v.end());
         reverse(v.begin(),v.end());
         for(int i=0;i<n;i+=2){
             if(i!=n-1){
                 dis+=2*k*(v[i].first+v[i+1].first);
                 k++;
             }
            else{
             dis+=2*k*(v[i].first);
            }

         }
         cout<<dis<<endl;
         cout<<"0"<<" ";
     }
}