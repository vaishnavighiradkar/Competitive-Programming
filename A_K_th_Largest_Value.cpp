#include<bits/stdc++.h>
using namespace std;

void solve(vector<int>v){
    int t,op;
    cin>>t>>op;

}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int n,q,count=0;
    cin>>n>>q;
   vector<int>a;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
        count+=a[i];
    }
    for(int i=0;i<q;i++){
        int t,x,k;
        cin>>t;
        {
            if(t==1){
                cin>>x;
                if(a[x-1]==1){
                    count--;
                }
                else count++;
                a[x-1]=1-a[x-1];
            }
            else {
                cin>>k;
                if(count>=k){
                    cout<<1<<endl;
                }
                else cout<<0<<endl;
            }
        }
    }
    
return 0;
}