#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<math.h>
#include<string>
#include<algorithm>
#include<limits>
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){

        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int> mp;
        for(char c : s){
            mp[c]++;
        }
        int oddc = 0;
        for(auto el : mp){
            if(el.second%2 == 1){
                oddc++;
            }
        }
        if(oddc <= 1 || oddc <= k+1){
            cout << "YES" << endl;
        }
        else{
            cout << "NO" << endl;
        }
    }
    return 0;
}
