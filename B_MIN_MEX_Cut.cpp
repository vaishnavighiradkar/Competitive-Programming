#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
         string s;
    cin>>s;
    int c0=0;
    c0=count(s.begin(),s.end(),'0');
    if(c0==0){
        cout<<0<<endl;
        continue;
    }
    int first = s.find('0');
        int last = s.rfind('0');
        if (last - first + 1 == c0) {
            cout << 1 << '\n';
        } else {
            cout << 2 << '\n';
        }
    }
return 0;
}