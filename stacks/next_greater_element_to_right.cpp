#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    stack<int>s;
    vector<int>v;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=n-1;i>=0;i--){
        if(s.top()>a[i]){
            v.push_back(a[i]);
            s.pop();
        }
        else {
            v.push_back(-1);
        }
        // if(s.empty()==true){
        //     v.push_back(-1);
        // }
    }
    reverse(v.begin(),v.end());
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }
    
}