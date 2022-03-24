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
    int k=-4;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            k += 4;
            for (int j = 1; j <= 5; j++)
                cout << ++k << " ";
            cout << endl;
        }
        else
        {
            k += 6;
            for (int j = 1; j <= 5; j++)
                cout << --k << " ";
            cout << endl;
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