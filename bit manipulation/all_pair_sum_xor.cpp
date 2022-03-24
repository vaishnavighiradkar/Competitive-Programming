#include<bits/stdc++.h>
using namespace std;
void solve(){
     int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<int>ans;
    int k=a[0]+a[0];
    for(int i=1;i<n;i++){
         k=k^(a[i]+a[i]);
    }
    cout<<k<<endl;
}
int main()
{
   
    solve();
    
return 0;
}