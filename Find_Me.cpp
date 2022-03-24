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
    int n,k;
    cin>>n>>k;
    bool flag=false;
    int a[n];
    fl(i,n){
        cin>>a[i];
        if(a[i]==k){
            flag=true;
            break;            
        }
    }
    if(flag==false){
        cout<<"-1"<<endl;
    }
    else cout<<1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
return 0;
}