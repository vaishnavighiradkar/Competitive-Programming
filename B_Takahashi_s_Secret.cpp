#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, x, count = 1;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int current_frnd = a[x];

    for (int i = 0; i < n; i++)
    {
        if (a[current_frnd] != a[x]&&x!=a[x])
        {
            current_frnd = a[current_frnd];
            count++;
        }
        else cout<<"1"<<endl;
            break;
    }
    cout << count << endl;
}