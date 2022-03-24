#include<bits/stdc++.h>
using namespace std;
 int singleNumber(vector<int>& nums) {
        unordered_map<int,int>freq;
        for(int i=0;i<nums.size();i++){
            if(freq.find(nums[i])==freq.end()){
                freq[nums[i]]=1;
            }
            else freq[nums[i]]++;
        }
        unordered_map<int,int>::iterator j;int ans;
        for(j=freq.begin();j!=freq.end();j++){
            if(j->second==1){
                ans=j->first;
                break;
            }
        }
        return ans;
    }
int main()
{
    vector<int>a;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push_back(x);
    }
    cout<<singleNumber(a);
return 0;
}