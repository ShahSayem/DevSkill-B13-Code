#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000000;

vector <bool> composite(1e7);
void sieveOfEratosthenes(ll n)  //O(nlog(logn))
{
    composite[0] = true, composite[1] = true; 
    for (int i = 2; i*i <= n; i++){
        if (!composite[i]){
            for (int j = i*i; j <= n; j+=i){
                composite[j] = true;
            } 
        }
    }    
} 

vector <int> divs[MAX+5];
void getDivisors(int n)   //TC/MC: O(nlogn)
{
    for (int i = 1; i <= n; i++){
        for (int j = i; j <= n; j+=i)
        divs[j].push_back(i);
    }
}
  

int main()
{   
    // ll n;
    // cin>>n;

    // sieveOfEratosthenes(n);

    getDivisors(MAX);
    for (auto x:divs[12])
        cout<<x<<" ";

    return 0;
} 