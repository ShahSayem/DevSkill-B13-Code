#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 10000000;

ll getExp(ll a, ll b)
{
    if (b == 0)
        return 1;
    if (b%2 == 0){
        auto x = getExp(a, b/2)%MOD;
        return (x*x)%MOD;
    }
    return (a * getExp(a, b-1))%MOD;
}  

ll getFactorial(int n)
{
    ll res = 1;
    for (int i = 1; i <= n; i++){
        res = (res*i)%MOD;
    }

    return res;
}
  
ll getFactorialRec(int n) //Recursion
{
    if (n == 0)
        return 1;
    ll res = (n * getFactorialRec(n-1))%MOD;
    cout<<res<<"\n";
    return res;
}

int main()
{   
    ll a, b;
    cout<<"Enter a, b to get (a^b)%MOD: ";
    cin>>a>>b;
    cout<<getExp(a, b);

    auto down = (getFactorial(73) * getFactorial(139)) % MOD;
    // cout<<(getFactorial(212) * )

    return 0;
} 