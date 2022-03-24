#include <bits/stdc++.h>
using namespace std;
bool isvowel(char test)
{
    if (test == 'a' || test == 'e' || test == 'i' || test == 'o' || test == 'u')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s, p;
        cin >> s >> p;
        int ans = 1e9;
        for (char i = 'a'; i <= 'z'; i++)
        {
            int count = 0;
            string s1 = s;
            string p1 = p;
            for (int j = 0; j < n; j++)
            {
                if (s1[j] == '?')
                {
                    s1[j] = i;
                }
                if (p1[j] == '?')
                {
                    p1[j] = i;
                }
            }
            for (int j = 0; j < n; j++)
            {
                if (s1[j] == p1[j])
                    continue;
                else if (isvowel(s1[j]) != isvowel(p1[j]))
                    count++;
                else
                    count += 2;
            }
            ans = min(ans, count);
        }
        cout << ans << endl;
    }
}