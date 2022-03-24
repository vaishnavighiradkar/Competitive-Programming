#include <bits/stdc++.h>
using namespace std;
bool isprime(int n)
{
    // Corner case
    if (n <= 1)
        return false;

    // Check from 2 to n-1
    for (int i = 2; i < n; i++)
        if (n % i == 0)
            return false;

    return true;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n;
        int a[n];
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            sum = sum + a[i];
        }
        bool flag;
        flag = isprime(sum);
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 != 0)
            {
                k = i;
                break;
            }
        }
        if (flag == false)
        { // if total sum is already composite
            cout << n << endl;
            for (int i = 0; i < n; i++)
            {
                cout << i+1 << " ";
            }
            cout << endl;
        }
        
        else if(flag==true)
        {
            cout << n - 1 << endl;
            for(int i=0;i<n;i++){
                if(i!=k){
                    cout<<i+1<<" ";
                }
            } cout<<endl;
        }
    }
}
