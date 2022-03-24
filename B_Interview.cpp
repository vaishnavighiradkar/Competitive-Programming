#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, t,count=0;
    bool flag=false;
    cin >> n >> t;
    while (n--)
    {
        int a, b;
        cin >> a >> b;
        int x, y;
        x = min(a, b);
        y = max(a, b);
       if(t<x||t>y){
              count++;
       }
    }
    if(count==n){
        cout<<"-1"<<endl;
    }
    else cout<<count<<endl;
}