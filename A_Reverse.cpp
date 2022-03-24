#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define ull unsigned long long
ll mod=1000000007;
#define pb push_back
#define mp make_pair
#define fl(i,n) for(int i=0;i<n;i++)
#define rl(i,m,n) for(int i=n;i>=m;i--)
#define pi 3.141592653589793238
#define vr(v) v.begin(),v.end()
#define rv(v) v.end(),v.begin()
void solve(){
   int n;
   cin>>n;
   int a[n];int l,r;
   fl(i,n){
       cin>>a[i];
      
   }
   fl(i,n){
        if(a[i]!=i+1)
       {
           l=i;
           
           break;
       }
   }
   for(int j=l;j<n;j++)
           {
               if(a[j]<a[l]){
                   r=j;
                   break;
               }
           }
   vector<int>v;
   for(int i=r;i>=l;i--){
       v.pb(a[i]);
   }
   fl(i,l){
       cout<<a[i]<<" ";
   }
   fl(i,v.size()){
       cout<<v[i]<<" ";
   }
   for(int i=r+1;i<n;i++){
       cout<<a[i]<<" ";
   }
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