#include <bits/stdc++.h>
using namespace std;
int main()
{

    int t;
    cin >> t;
    
    while (t--)
    {
        int n;
        cin >> n;
        map<long long int,long long int> m;
        for (int i = 0; i < n; i++)
        {
           int x;
            cin >> x;
            m[x]++;
        }
        bool check = true;
        // for(auto i:m){
        //     cout<<i.first<<" "<<i.second<<endl;
        // }
       vector<int> keys;
       vector<int> rep; 
            for(auto i : m){
           keys.push_back(i.first);
            }
        
      
        for (auto i : m)
        {
            if (i.second > 2)
            { // for frequency>2
                cout << "-1" << endl;
                check = false;
                break;
            }
            
            else if (m[keys[keys.size() - 1]] > 1)
            { // for largest element freq>1
                cout << "-1" << endl;
                check = false;
                break;
            }  
            else if(i.second==2){
                rep.push_back(i.first);
                check =true;
            }  
             
              
        }
        if (check == true)
        {
            for (int i=0;i<rep.size();i++){
                cout<<rep[i]<<" ";
            } 
            reverse(keys.begin(),keys.end());
            for(int j=0;j<keys.size();j++){
                    cout<<keys[j]<<" ";
                }
            
            cout << endl;
        }
        
    }
}
