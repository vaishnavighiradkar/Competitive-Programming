#include<bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin>>n;
    char a[n][n];
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='*'){
                v.push_back({i,j});
            }
        }
    }
   if(v[0].first==v[1].first)   //same row
   {
       if(v[0].first==0){
        v.push_back({v[0].first+1,v[1].second});
       v.push_back({v[1].first+1,v[0].second});
       }
       else if(v[0].first==n-1){
        v.push_back({v[0].first-1,v[1].second});
       v.push_back({v[1].first-1,v[0].second});
       }
       else {
           v.push_back({v[0].first-1,v[1].second});
       v.push_back({v[1].first-1,v[0].second});
       }
   }
   else if(v[0].second==v[1].second)  //same column
   {
       if(v[0].second==0){
        v.push_back({v[0].first,v[1].second+1});
       v.push_back({v[1].first,v[0].second+1});
       }
       else if(v[0].second==n-1){
        v.push_back({v[0].first,v[1].second-1});
       v.push_back({v[1].first,v[0].second-1});
       }
       else {
           v.push_back({v[0].first,v[1].second-1});
       v.push_back({v[1].first,v[0].second-1});
       }
   }
   else {
       v.push_back({v[0].first,v[1].second});
       v.push_back({v[1].first,v[0].second});
   }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
        {
            if((i==v[0].first&&j==v[0].second)||(i==v[1].first&&j==v[1].second)||(i==v[2].first&&j==v[2].second)||(i==v[3].first&&j==v[3].second))
            {
                cout<<"*";
            }
            else cout<<".";
        }
        cout<<endl;
    }

}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}