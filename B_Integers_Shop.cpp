#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    int sum = 0;
    int l,r,c;
    vector<set<int>>v;
    set<int>s;
    for (int i = 1; i <= n; i++)
    {
        cin>>l>>r>>c;
        for(int j=l;j<=r;j++){
            s.insert(j);
        }
        v.push_back(s);
        s.clear();
    }
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
}