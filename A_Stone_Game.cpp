#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
   int k,m;
   for(int i=0;i<n;i++)
   {
       if(v[i]==*min_element(v.begin(),v.end())){
           k=i;
       }
       else if(v[i]==*max_element(v.begin(),v.end())){
           m=i;
       }
   }
   cout << min({max(m, k) + 1,(n - 1) - min(m, k) + 1,(n - 1) - m + k + 2,(n - 1) - k + m + 2})<<endl;
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