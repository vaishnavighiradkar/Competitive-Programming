#include <bits/stdc++.h>
using namespace std;
int palindrome(int arr[], int n)
{

    int flag = 0;

    for (int i = 0; i <= n / 2 && n != 0; i++)
    {
        if (arr[i] != arr[n - i - 1])
        {
            flag = 1;
            break;
        }
    }
    if(flag==1){
        return 0;             //palindrom hai to 1 return karega
    }
    else return 1;
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
            int pal=palindrome(a,n);
        if(pal==1){
            cout<<"YES"<<endl;
        }
      
        }
        

    }