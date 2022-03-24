#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b, c;
        cin >> a >> b >> c;
        long long int x = 0, y = 0;
        if (a <= b)
        {
            x = (b + 1) - a;
        }
        if (a <= c)
        {
            y = (c + 1) - a;
        }
        cout << max(x, y) << " ";
        x = 0, y = 0;
        if (b <= a)
        {
            x = (a + 1) - b;
        }
        if (b <= c)
        {
            y = (c + 1) - b;
        }
        cout << max(x, y) << " ";
        x = 0, y = 0;
        if (c <= b)
        {
            x = (b + 1) - c;
        }
        if (c <= a)
        {
            y = (a + 1) - c;
        }
        cout << max(x, y) << " ";
        x = 0, y = 0;
        cout << endl;
    }
}
