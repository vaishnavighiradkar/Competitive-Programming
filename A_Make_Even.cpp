#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string n;
        cin >> n;
        bool flag=0;
        for(int i=0;i<n.size();i++)
        {
            if(n[i]%2==0){
                flag=1;
                break;
            }
        }
        if(flag==0){
            cout<<"-1"<<endl;
        }
        else {
            if(n[n.size()-1]%2==0){
                cout<<"0"<<endl;
            }
            else {
                if(n[0]%2==0){
                    cout<<"1"<<endl;
                }
                else cout<<"2"<<endl;
            }
        }
    }
}