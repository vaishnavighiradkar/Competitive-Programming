#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        vector<int>v;
        int n;
        cin>>n;
        for(int i=0;i<n;i++){
            int x;
            cin>>x;
            v.push_back(x);
        }
      int max=*max_element(v.begin(),v.end());
      int min=*min_element(v.begin(),v.end());
      if(min==max){
          cout<<"0"<<endl;
      }
      else if(v[n-1]==max){
          cout<<"1"<<endl;
      }
      else {
          cout<<"2"<<endl;
      }
    }
}