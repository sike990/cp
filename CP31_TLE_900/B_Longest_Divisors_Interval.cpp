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

        ll n;
        cin>>n;
        int count = 0;
        for(int i = 1 ; i <= n ; i++){
            if(n%i == 0){
                count++;
            }
            else break;
        }
        
        cout << count << endl;

    }
    return 0;
}