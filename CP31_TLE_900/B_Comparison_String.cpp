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
        //logic : we need to have the largest number of consicutive same element count cause that only need distinct element + 1 , eg : >>> will need 4(3+1) element to satisfy the need and apart from that every <> can be formed via repetation.
        int n;
        cin>>n;
        string s;
        cin>>s;
        int count = 1;
        int tempcount = 1;
        for(int i = 1 ; i < n ; i++){
            if(s[i] == s[i-1]){
                tempcount++;
            }
            else{
                tempcount = 1;
            }
            count = max(tempcount , count);
        }

        cout << count + 1 << endl;

    }
    return 0;
}