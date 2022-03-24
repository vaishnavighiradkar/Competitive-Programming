#include<bits/stdc++.h>
using namespace std;
#define ll long long int
void solve(){
    int n;
    cin>>n;
    vector<int>a(n);
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    vector<int>ans;
    int m=*max_element(a.begin(),a.end());
    if(a[0]!=m&&a[n-1]!=m){
        cout<<"-1"<<endl;
    }
    else {
        if(a[0]==m){
             reverse(a.begin(),a.end());
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
        else if(a[n-1]==m)
        {  reverse(a.begin(),a.end());
            for(int i=0;i<n;i++){
                cout<<a[i]<<" ";
            }
            cout<<endl;
        }
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