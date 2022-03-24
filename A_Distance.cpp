#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int x,y;
        cin>>x>>y;
        int k1,k2;
        int dis=(x+y)/2;
        bool flag=false;
        for(int i=0;i<=50;i++)
        {
            for(int j=0;j<=50;j++){
                if(((i+j)==dis)&&((abs(x-i)+abs(y-j))==dis)){
                    k1=i,k2=j;
                    flag=true;
                    break;
                }
            }
        }
        if(flag==true){
            cout<<k1<<" "<<k2<<endl;
        }
        else cout<<"-1 "<<"-1"<<endl;
    }
}