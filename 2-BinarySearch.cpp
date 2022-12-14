#include <bits/stdc++.h>
#define ll long long
using namespace std;

ll BinarySearch(ll k){
    ll l = 1, r = 15000000005LL; //10^18 (1e18) -> 10^10

    while (l<r){
        ll mid = l+(r-l)/2;
        ll cnt = (mid/2)+(mid/3)-(mid/6);

        if (cnt < k){
            l = mid +1;
        }
        else {
            r = mid;
        }
    }
    
    return l;
}

int main()
{
    ll k;
    while (cin>>k){
        BinarySearch(k);
    }

    return 0;
} 
  
