#include <bits/stdc++.h>
using namespace std;
void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;
    int ca=0,cb=0;
    vector<string>v;
    for(int i=0;i<n;i++){
        if(s[i]=='a') ca++;
        else cb++;
    }
    if(ca==0||cb==0) cout << "-1 -1" << endl;
    for (int i = 0; i < n -1; i++)
    {
        if (s[i] != s[i + 1])
        {
            cout << i + 1 << " " << i + 2 << endl;
            break;
        }
        // else
        // {
        //     cout << "-1 -1" << endl;
        // }
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin >> t;
    while (t--)
    {
        solve();
    }
    return 0;
}