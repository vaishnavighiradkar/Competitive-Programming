#include <iostream>
using namespace std;
int main()
{
   long long int t, n;
    cin >> t;
    while (t--)
    {
        int odd = 0;
        int even = 0;
        cin >> n;
       long long int a[n];
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            if (a[i] % 2 == 0)
            {
                even++;
            }
            else
                odd++;
        }
        if(odd==0){
            cout<<"0"<<endl;
        }
       else if(odd%2==0){
            cout<<odd/2<<endl;
        }
        else if(odd%2!=0){
            cout<<(odd-1)/2<<endl;
        }
    }
}