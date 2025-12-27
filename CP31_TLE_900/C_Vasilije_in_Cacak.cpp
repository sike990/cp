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

        ll n,k,x;

        cin>>n>>k>>x;

        ll minimum_sum = (k*(k+1))/2;
        ll m = n-k;
        ll maximum_sum = (n*(n+1))/2 - (m*(m+1))/2;

        if(x <= maximum_sum && x >= minimum_sum){
            cout << "YES" << endl;
        }
        else cout << "NO" << endl;
        //Logic : we calculate the minimum sum that we can have by taking k numbers in range [1,n] and then the maximum also by first taking 1st k and then taking last k
        //Now if sum of x to be possible than it must have to lie between minimum_sum and maximum_sum 
        //Any number between can be formed through the range
    }
    return 0;
}
