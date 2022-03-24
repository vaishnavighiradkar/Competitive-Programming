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
        string s;
        int countbw = 0, countwb = 0;
            cin >> s;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] == 'B' && s[i + 1] == 'W')
            {
                countbw++;
            }

             if (s[i] == 'W' && s[i + 1] == 'B')
            {
                countwb++;
            }
        }
        if (s[0] == 'B')
        {
            cout << countbw << endl;
        }

        else if (s[0] == 'W'){
                cout << countwb << endl;
        }
    
            
            
    }
}