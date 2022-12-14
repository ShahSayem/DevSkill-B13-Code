#include <bits/stdc++.h>
#define ll long long
using namespace std;

int get_gcd(int a, int b) // gcd(0, b) = b
{
    if (a == 0)
        return b;

    return get_gcd(b%a, a);
}

int get_div_count(int n)
{
    int cnt = 0;
    for (int i = 1; i*i <= n; i++){
        if (n%i == 0){
            cnt++;
            if (i*i != n)
                cnt++;
        }
    }
    
    return cnt;
}

bool primeChecker (ll n)
{
    if(n==0 || n==1)
        return false;
    for (int i = 2; i*i <= n; i++){
        if (n%i == 0)
            return false;
    }
    return true;
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    ll n;
    cin>>n;
    
    cout<<get_div_count(n);
    return 0;
} 
  
