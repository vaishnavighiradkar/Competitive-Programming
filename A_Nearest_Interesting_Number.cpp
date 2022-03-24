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
int return_sum(int k){
        vector<int>v;
    while(k>0){
        v.pb(k%10);
        k=k/10;
    }
    int n=0;
    for(int i=0;i<v.size();i++)
    {
         n=n+v[i];
    }
    return n;
}
void solve(){
    int a;
    cin>>a;
    for(int i=a;i<=a+6;i++){
        int m=return_sum(i);
        if(m%4==0){
            cout<<i<<endl;
            break;
        }
    }

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    solve();
    
return 0;
}