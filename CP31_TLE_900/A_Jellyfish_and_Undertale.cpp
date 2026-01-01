#include<iostream>
#include<vector>
#include<queue>
#include<unordered_map>
#include<unordered_set>
#include<math.h>
#include<string>
#include<algorithm>
#include<limits>
#define ll long long
using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--){

        ll a,b,n;

        cin>>a>>b>>n;

        vector<int> arr(n);
        ll total_time = b-1;
        for(int i = 0 ; i < n ; i++){
            ll curr;
            cin>>curr;
            total_time += min(curr,a-1);
        }
        total_time += 1;
        

        cout << total_time << endl;

        

    }
    return 0;
}