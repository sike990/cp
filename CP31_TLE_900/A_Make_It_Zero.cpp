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

        int n;
        cin>>n;
        int total_xor;
        for(int i = 0 ;i < n ; i++){
            int curr;
            cin>>curr;
            if(i == 0)total_xor = curr;
            else total_xor ^= curr;
        }
        if(n%2 == 0){
        cout << 2 << endl;
        cout << 1 <<" "<< n << endl;
        cout << 1 <<" "<< n << endl;
        }
        else if(n%2 == 1){
        cout << 3 << endl;
        cout << 1 <<" "<< n << endl;
        cout << 1 <<" "<< n << endl;
        cout << 1 <<" "<< n << endl;  
        }
        //Logic the property a^a == 0 is used 
        //so if n is odd then we have a b c fo eg
        //as each element we need a in even size for that we need to perform the xor operation atleast thrice then we will get something like a^a^a^a^a^a
        //for even we just need to do it twicw and we will get a^a^b^b as first element for a,b
    }
    return 0;
}