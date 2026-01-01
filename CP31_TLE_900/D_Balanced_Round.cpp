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

        vector<int> arr(n);
        for(int i = 0 ; i < n ; i++)cin>>arr[i];
        sort(arr.begin(),arr.end());

        vector<int> breaks;

        int count = 0;
        for(int i = 1 ; i < n ; i++){
            count++;
            if(arr[i]-arr[i-1] > k){
                breaks.push_back(count);
                count = 0;
            }
        }
        count++;
        breaks.push_back(count);

        
        int max_trail = *max_element(breaks.begin(),breaks.end());
        // cout << max_trail << "\n";
        int to_remove = n-max_trail;

        cout << to_remove << endl;
        

    }
    return 0;
}