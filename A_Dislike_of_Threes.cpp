#include<bits/stdc++.h>
using namespace std;
void solve(){
    int a[100000];
    int k=0;
    int m;
    cin>>m;
    for(int i=1;i<100000;i++){
        if(i%3!=0&&i%10!=3){
            a[k]=i;
            k++;
        }
    }
    cout<<a[m-1]<<endl;
}
int main(){
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}