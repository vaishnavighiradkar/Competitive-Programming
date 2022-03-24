#include<bits/stdc++.h>
using namespace std;
void print(int n)
{
    for(int i=1;i<=n;i++){
        cout<<"(";
    }
    for(int i=1;i<=n;i++)
    {
        cout<<")";
    }
}
void solve(){
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++)
    {
          print(i);
          print(n-i);
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