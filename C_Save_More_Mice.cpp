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
      vector<int>a(k);
    for(int i=0;i<k;i++) cin>>a[i];
    
    sort(a.rbegin(),a.rend());
    
    int cat=0;
    int total=0;
    for(int i=0;i<k;i++){
        if(cat < a[i]){
            cat+=(n-a[i]);
            total++;
        }
        else break;
    }
   cout<<total<<endl;
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