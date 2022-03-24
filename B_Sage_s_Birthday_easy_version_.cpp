#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int k;
    vector<int> arr(n),v;
   int a[n];
    for (int i = 0; i < n; i++)
    {
       cin>>arr[i];
    }
    if (n <= 2)
    {
        k = 0;
        cout << k<<endl;
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
         k=n/2;
         if(n%2==0){
             k=k-1;
         }
       sort(arr.begin(),arr.end());
       long long int c=0;
        for (int i = 1; i < n; i+=2,c++)
        {
            a[i]=arr[c];
        }
       
        for (int i = 0; i < n; i+=2,c++)
        {
            a[i]=arr[c];
        }
       cout<<k<<endl;
       for(int i=0;i<n;i++){
           cout<<a[i]<<" ";
       }
       cout<<endl;
    }
}