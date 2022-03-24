#include<bits/stdc++.h>
using namespace std;
void solve(){
    string x1,x2;
    int p1,p2;
    cin>>x1>>p1;
    cin>>x2>>p2;
    int size1=x1.size()+p1;
    int size2=x2.size()+p2;
    if(size1>size2){
        cout<<">"<<endl;
    }
    else if(size2>size1){
        cout<<"<"<<endl;
    }
    else {
        while(x2.size()<x1.size())
                {
                    x2+='0';
                }
                while(x2.size()>x1.size())
                {
                    x1+='0';
                }
            if(x1>x2)
            {
                cout<<">"<<endl;
            }
            else if(x1<x2)
            {
                cout<<"<"<<endl;
            }
            else
            {
                cout<<"="<<endl;
            }

    }
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
      solve();
        
    }
}