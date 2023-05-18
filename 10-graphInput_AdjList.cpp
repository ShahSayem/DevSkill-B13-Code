#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000000;

vector <int> gr[MAX+5];

int main()
{   
    int v, e, a, b;
    cin>>v>>e;

    for (int i = 0; i < e; i++){
        //a, b; a--b
        cin>>a>>b;

        gr[a].push_back(b);
        gr[b].push_back(a);
    }

    for (int n = 0; n < v; n++){
        cout<<n<<": ";

        for (auto u:gr[n])
            cout<<u<<" ";

        cout<<"\n";
    }
    
    
    return 0;
} 