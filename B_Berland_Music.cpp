#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int binarySearch(vector<pair<int,int>>a, int l, int r, int x)
{
    while (l <= r) {
        int m = l + (r - l) / 2;
         if (a[m].first == x)
            return m;
         if (a[m].first < x)
            l = m + 1;
         else
            r = m - 1;
    }
}
void solve(){
    int n;
    cin>>n;
    int a[n],b[n];
    map<int,int>m;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
        b[i]=a[i];
        m[a[i]]=i;
    }
    string s;
    cin>>s;
    vector<int>dis;
    vector<int>lik;
    for(int i=0;i<n;i++){
        if(s[i]=='1'){
            lik.push_back(a[i]);
        }
        else if(s[i]=='0') {
            dis.push_back(a[i]);
        }
    }
    sort(dis.begin(),dis.end());
    sort(lik.begin(),lik.end());
    sort(a,a+n);
    reverse(dis.begin(),dis.end());
        reverse(lik.begin(),lik.end());
        reverse(a,a+n);
        int i;
            for(i=0;i<lik.size();i++)
            {
                b[m[lik[i]]]=a[i];
            }
            for(int j=0;j<dis.size();j++)
            {
                b[m[dis[j]]]=a[i];
                i++;
            }
 
        for(int i=0;i<n;i++)
            cout<<b[i]<<" ";
    cout<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}