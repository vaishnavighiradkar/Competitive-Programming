#include <bits/stdc++.h>
using namespace std;
int solve(int n, int v[])
{
    unordered_map<int, int> freq;
    vector<int> sol;
    for (int i = 0; i < n; i++)
    {
        if (freq.find(v[i]) == freq.end())
        {
            freq[v[i]] = 1;
        }
        else
        {
            freq[v[i]]++;
        }
    }
    int ans = 0;
    unordered_map<int, int>::iterator it;
    for (it = freq.begin(); it != freq.end(); it++)
    { 
        if(it->first!=0){
            if (it->second >= 2)
            {
                sol.push_back(it->first);
                sol.push_back(-it->first);
            }
            else
            {
                sol.push_back(it->first);
            }
    }
    else {
       sol.push_back(it->first);
    }
           
    }
     unordered_map<int, int> freq1;
    for (int i = 0; i < sol.size(); i++)
    {
        if (freq1.find(sol[i]) == freq1.end())
        {
            freq1[sol[i]] = 1;
        }
        else
        {
            freq1[sol[i]]++;
        }
    }
    return freq1.size();
    
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
       cout<< solve(n, a)<<endl;
    }
}