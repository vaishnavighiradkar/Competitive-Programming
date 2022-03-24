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
        bool flag=true;
        vector<string>v;
        for(int i=0;i<2;i++){
            string s;
            cin>>s;
            v.push_back(s);
        }
        for(int i=1;i<n-1;i++){
            if(v[0][i]=='1'&&v[1][i]=='1'){
                flag=false;
            }
            
        }
        if(flag==false){
            cout<<"NO"<<endl;
        }
        else cout<<"YES"<<endl;
    }
}