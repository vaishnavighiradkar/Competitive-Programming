#include <iostream>
using namespace std;

int checkcoins(int x, int y)
{
    int total_amout = x + 2 * y;
    if (total_amout % 2 != 0)
    {
        return 0;
    }
    else if (x == 0 && y % 2 != 0)
    {
        return 0;
    }
    else
        return 1;
}

int main()
{
    // your code goes here
    int t, k;
    cin >> t;
    long long int x, y;
    while (t--)
    {
        cin >> x >> y;
        k = checkcoins(x, y);
        if (k == 0)
        {
            cout << "NO" << endl;
        }
        if (k == 1)
        {
            cout << "YES" << endl;
        }
    }
    return 0;
}