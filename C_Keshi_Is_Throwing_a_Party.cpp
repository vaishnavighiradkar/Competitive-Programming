#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a, b;
        int sr, sp;
        int count = 0;
        for (int i = 1; i <= n; i++)
        {
            cin >> a >> b;
            sr = n - i;
            sp = n - sr -1;
            if (sr <= a && sp <= b)
            {
                count++;
            }
        }
        cout << count << endl;
    }
}   
