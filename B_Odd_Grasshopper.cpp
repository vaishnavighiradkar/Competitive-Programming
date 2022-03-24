#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        ll x, n;
        cin >> x >> n; // after every 4th jump it comes to original position
        // int d=0;
        // for(int i=0;i<n;i++){
        //     if(x%2==0){
        //         d++;
        //         x=x-d;
        //     }
        //     else {
        //         d++;
        //         x=x+d;
        //     }
        // }
        // cout<<x<<endl;

        ll rem = n % 4;
        ll div = (n / 4) * 4;
        if (x % 2 == 0)
        {
            if (rem == 0)
            {
                cout << x << endl;
            }
            else if (rem == 1)
            {
                cout << x - (div + 1) << endl;
            }
            else if (rem == 2)
            {
                cout << x + 1 << endl;
            }
            else if (rem == 3)
            {
                cout << x + div + 4 << endl;
            }
        }
        else
        {
            if (rem == 0)
            {
                cout << x << endl;
            }
            else if (rem == 1)
            {
                cout << x + (div + 1) << endl;
            }
            else if (rem == 2)
            {
                cout << x - 1 << endl;
            }
            else if (rem == 3)
            {
                cout << x - div - 4 << endl;
            }
        }
    }
}