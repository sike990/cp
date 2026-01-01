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

        int n,q;
        cin>>n>>q;
        ll total_sum = 0;
        vector<ll> cumm(n);
        ll prev = 0;
        for(int i = 0 ; i < n ; i++){
            int el;
            cin>>el;
            cumm[i] = prev + el;
            prev = cumm[i];
        }
        total_sum = cumm[n-1];
        for(int i = 0 ; i < q ; i++){
            int l,r,k;
            cin>>l>>r>>k;
            int odd = 1;
            ll bef = (l > 1)?cumm[l-2]:0;
            ll after = cumm[r-1];
            ll diff = after-bef;
            ll replacement = abs(diff-(k*((r-l)+1)));
            if(total_sum%2 == 0 && replacement%2 ==0){
                odd*=0;
            }
            if(total_sum%2 == 1 && replacement%2 ==1 ){
                odd*=0;
            }
            if(odd)cout << "YES" << endl;
            else cout << "NO" << endl;
        }

    }
    return 0;
}