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

int gcd(int a , int b){

    if(b == 0)return a;

    return gcd(b,a%b);
}
int main()
{
    int t;
    cin>>t;
    while(t--){

        int n;
        cin>>n;
        // int oddcount = 0
        // int nzevencount =0;
        vector<int> arr(n);
        for(int i = 1 ;i  <= n ;i++){
            int el;
            cin>>el;
            
            int diff = abs(el-i);
            arr[i-1]=diff;
            // if(diff > 0 && diff%2==0){  
            //     nzevencount += 1;
            // }
            // else if(diff==0){
            //     continue;
            // }
            // else{
            //     oddcount += 1;
            // }
        }

        // if(nzevencount > 0 && oddcount > 0){
        //     cout << 1 << endl;
        // }
        // else{
            int ans = arr[0];
            for(int i = 1 ; i < n ; i++){
                ans = gcd(arr[i],ans);
            }
            cout << ans << endl;
        // }
        
    }
    return 0;
}
//Logic : the wrong placed element will have some difference in position wrt realposition the maximum k we can have will be a multiple of every differnce out there thus finding gcd and returning it as answer.