#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000005;

int phi[MAX];

void generatePhi(int n)     //O(nlogn)
{
    for (int i = 1; i <= n; i++){
        phi[i] = i;
    }
    
    for (int i = 2; i <= n; i++){
        if (phi[i] == i){
            for (int j = i; j <= n; j += i){
                phi[j] -= phi[j]/i;
            } 
        }
    }

    for (int i = 1; i <= n; i++){
        cout<<i<<": "<<phi[i]<<"\n";
    }
}

int main()
{   
    generatePhi(MAX);

    return 0;
} 