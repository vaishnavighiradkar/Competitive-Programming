#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;
   bool flag=true;
    int ones=0,zeroes=0,x=0,y=0;
    vector<int>zero;
    vector<int>one;
   for(int i=0;i<n-1;i++){
       if(s[i]>s[i+1]) flag=false;
   }
   if(flag==true){
       cout<<0<<endl;
   }
   else {
    for(int i=0;i<s.size();i++)
    {
        if(s[i]=='1') {ones++;}
        else if(s[i]=='0') {zeroes++;}
    }  
    // cout<<ones<<" "<<zeroes<<endl;
    for(int i=0;i<zeroes;i++)
    {
        if(s[i]=='1') {x++;
        one.push_back(i+1);}
    }
    for(int i=zeroes;i<n;i++)
    {
        if(s[i]=='0') 
        {
            y++;
        zero.push_back(i+1);
        }
    } 
    // cout<<x<<" "<<y<<endl;
    cout<<1<<endl;
    cout<<x+y<<" ";
    for(int i=0;i<one.size();i++){
        cout<<one[i]<<" ";
    }
    for(int i=0;i<zero.size();i++){
        cout<<zero[i]<<" ";
    }
    cout<<endl;
    }
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