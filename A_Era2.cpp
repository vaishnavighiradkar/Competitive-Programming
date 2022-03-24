#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int current_num = 0, current_indx = 0, count1 = 0;
        int prev_index = 0, prev_num = 0;
        int n, count = 0;
        cin >> n;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int x;
            cin >> x;
            v.push_back(x);
        }
        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] <= (i + 1))
            {
                count1++;
            }
            else if (v[i] > (i + 1))
            {
                current_num = v[i];
                current_indx = i + 1;
                count = count + (current_num - (current_indx + (prev_num - prev_index)));
                prev_num = current_num;
                prev_index = current_indx;
            }
            count1 = 0;
        }
        prev_index = 0;
        prev_num = 0;
        if (count1 == v.size())
        {
            cout << "0" << endl;
        }
        else if (count1 < v.size())
        {
            cout << count << endl;
        }
    }
}