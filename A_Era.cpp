#include <bits/stdc++.h>
#define ll long long int
using namespace std;
bool comp(int a, int b)
{
    return (a < b);
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {   ll difference = 0, answer = 0;
        int n, count = 0;
        cin >> n;
        vector<ll> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
            if (v[i] > (i + 1))
            {
                difference = abs(v[i] - (i + 1));
                answer = max(answer, difference);
                count = 0;
            }
            else
                count++;
        }
        if (count < v.size())
            cout << answer << endl;

        else if (count == v.size())
        {
            cout << "0" << endl;
        }
    }
}