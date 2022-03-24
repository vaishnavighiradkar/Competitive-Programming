#include <bits/stdc++.h>
#define ll long long int
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        ll n, h, sum = 0;
        cin >> n >> h;
        vector<int>v;
        vector<int>v1;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        reverse(v.begin(),v.end());
        v1.push_back(v[0]);
        v1.push_back(v[1]);
        // cout<<v1[0]<<" "<<v1[1]<<endl;
        if(h<=v1[0]) {
               cout<<"1"<<endl;
        }        
        else if(h%(v1[0]+v1[1])==0){
            cout<<(h/(v1[0]+v1[1]))*2<<endl;
        }
        else if(h%(v1[0]+v1[1])<=v1[0]){
        cout<<(h/(v1[0]+v1[1]))*2+1<<endl;

        }
        else if(h%(v1[0]+v1[1])>v1[0]){
        cout<<(h/(v1[0]+v1[1]))*2+2<<endl;

        }

    }
}