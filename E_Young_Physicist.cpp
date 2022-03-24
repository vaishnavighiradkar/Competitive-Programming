#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int x[n],y[n],z[n];
    for(int i=0;i<n;i++){
        cin>>x[i]>>y[i]>>z[i];
    }
    int sum_x=0,sum_y=0,sum_z=0;
    for(int i=0;i<n;i++){
        sum_x=sum_x+x[i];
    }
    for(int i=0;i<n;i++){
        sum_y=sum_y+y[i];
    }
    for(int i=0;i<n;i++){
        sum_z=sum_z+z[i];
    }
    if(sum_x==0&&sum_y==0&&sum_z==0){
        cout<<"YES"<<endl;
    }
    else cout<<"NO"<<endl;
}