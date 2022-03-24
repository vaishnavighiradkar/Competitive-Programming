#include<bits/stdc++.h>
using namespace std;
#define ll long long int
ll area_triangle_double(ll x1,ll x2,ll x3,ll y1, ll y2, ll y3)
{
    ll m1=x1*y2+x2*y3+x3*y1;
    ll m2=y1*x2+y2*x3+y3*x1;
    ll area=abs(m1-m2);
    return area;
}
void solve(){
    ll w,h;
    cin>>w>>h;
    ll k1,k2,k3,k4;
    cin>>k1;
    ll x[k1],a[4];
    for(ll i=0;i<k1;i++){
        cin>>x[i];
    }
    cin>>k2;
    vector<ll>ans;
    ll x1[k2];
    for(ll i=0;i<k2;i++){
        cin>>x1[i];
    }
    cin>>k3;
    ll y[k3];
    for(ll i=0;i<k3;i++){
        cin>>y[i];
    }
    cin>>k4;
    ll y1[k4];
    for(ll i=0;i<k4;i++){
        cin>>y1[i];
    }
    sort(x,x+k1);
    sort(x1,x1+k2);
    sort(y,y+k3);
    sort(y1,y1+k4);
    //for x array
    for(ll i=0;i<k2;i++){
        ans.push_back(area_triangle_double(x[0],x[k1-1],x1[i],0,0,h));
    }
    for(ll i=0;i<k3;i++){
        ans.push_back(area_triangle_double(x[0],x[k1-1],0,0,0,y[i]));
    }
    for(ll i=0;i<k4;i++){
        ans.push_back(area_triangle_double(x[0],x[k1-1],w,0,0,y1[i]));
    }


    //for x1
    for(ll i=0;i<k1;i++){
        ans.push_back(area_triangle_double(x1[0],x1[k2-1],x[i],h,h,0));
    }
    for(ll i=0;i<k3;i++){
        ans.push_back(area_triangle_double(x1[0],x1[k2-1],0,h,h,y[i]));
    }
    for(ll i=0;i<k4;i++){
        ans.push_back(area_triangle_double(x1[0],x1[k2-1],w,h,h,y1[i]));
    }
    //for y
    for(ll i=0;i<k1;i++){
        ans.push_back(area_triangle_double(0,0,x[i],y[0],y[k3-1],0));
    }
    for(ll i=0;i<k2;i++){
        ans.push_back(area_triangle_double(0,0,x1[i],y[0],y[k3-1],h));
    }
    for(ll i=0;i<k4;i++){
        ans.push_back(area_triangle_double(0,0,w,y[0],y[k3-1],y1[i]));
    }
    //for y1
    for(ll i=0;i<k1;i++){
        ans.push_back(area_triangle_double(w,w,x[i],y1[0],y1[k4-1],0));
    }
    for(ll i=0;i<k2;i++){
        ans.push_back(area_triangle_double(w,w,x1[i],y1[0],y1[k4-1],h));
    }
    for(ll i=0;i<k3;i++){
        ans.push_back(area_triangle_double(w,w,0,y1[0],y1[k4-1],y[i]));
    }
    cout<<*max_element(ans.begin(),ans.end())<<endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    ll t;
    cin>>t;
    while(t--)
    {
    solve();
    }
return 0;
}