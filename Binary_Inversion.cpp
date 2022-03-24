#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n, m;
        cin >> n >> m;
        vector<string> v;
        string s = "";
        for (ll i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        // for(int i=0;i<n;i++){
        //     cout<<v[i]<<" ";
        // }
        // cout<<endl;
        for (ll i = 0; i < n; i++)
        {
            s = s + v[i];
        }
        // cout<<s<<endl;
        ll count = 0;
        ll answer = 0;
        for(int i=0;i<n*m;i++){
            if(s[i]=='1'){
                count++;
            }
            else answer+=count;
        }
        cout<<answer<<endl;
}
}


// #include <bits/stdc++.h>
// using namespace std;
// #define ll long long int
// int main()
// {
//     ll t;
//     cin >> t;
//     while (t--)
//     {
//         ll n, m;
//         cin >> n >> m;
//         vector<string> v;
//         string s = "";
//         for (ll i = 0; i < n; i++)
//         {
//             string s;
//             cin >> s;
//             v.push_back(s);
//         }
//         sort(v.begin(), v.end());
//         // for(int i=0;i<n;i++){
//         //     cout<<v[i]<<" ";
//         // }
//         // cout<<endl;
//         for (ll i = 0; i < n; i++)
//         {
//             s = s + v[i];
//         }
//         // cout<<s<<endl;
//         ll count = 0;
//         ll answer = 0;
//         for(int i=0;i<n*m;i++){
//             if(s[i]=='1'){
//                 count++;
//             }
//             else answer+=count;
//         }
//         cout<<answer<<endl;
// }
// }