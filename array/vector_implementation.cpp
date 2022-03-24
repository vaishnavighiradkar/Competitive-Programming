#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main(){
    cout<<"Enter the number of elements: ";
    int n;
    cin>>n;
    vector<int>v;
        cout<<"Enter the elements: ";
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int i=0;i<n;i++){
    cout<<v[i]<<" ";
    }
    
}