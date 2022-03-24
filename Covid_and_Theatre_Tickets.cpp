#include<bits/stdc++.h>
using namespace std;
void solve(){
  int n,m;
  cin>>n>>m;
  int availabe_rows;
  if(n%2==0){
      availabe_rows=n/2;
  }
  else availabe_rows=(n+1)/2;
  int available_seat_in_each_row;
    if(m%2==0){
      available_seat_in_each_row=m/2;
  }
  else available_seat_in_each_row=(m+1)/2;
  cout<<availabe_rows*available_seat_in_each_row<<endl;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        solve();
    }
}