#include<bits/stdc++.h>
using namespace std;
const int N= 10e5+10;
int a[N];
int main(){
    int p;
    cin>>p;
    int ans=0;
    for(int i=1;i<N;i++){
        a[i]=a[i-1]+i;
    }
    if(p==0){
        cout<<"0"<<endl;
    }
    for(int i=1;i<N;i++){
        if(a[i]%p==0){
            ans=i;
            break;
        }
    }
    cout<<ans<<endl;
}