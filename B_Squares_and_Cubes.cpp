#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
         int n;
         set<int>a;
        cin>>n; 
        int count=0;
        count+=floor(sqrt(n));
        count+=floor(cbrt(n));
        count-=floor(sqrt(cbrt(n)));
        cout<<count<<endl;
    }
}