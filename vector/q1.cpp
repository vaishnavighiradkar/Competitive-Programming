# include<bits/stdc++.h>
using namespace std;
int main(){
    int n,f=1;
    cin>>n;
    vector<pair<int ,int>>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back({x,f});

    }
    for(int i=0;i<n;i++){
        v.pop_back();
    }
}
