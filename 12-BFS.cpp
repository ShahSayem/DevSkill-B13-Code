#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 100000;

vector <int> gr[MAX + 5];
vector <int> dist;

void bfs(int src, int n) //src -> source node
{
    dist.clear();
    dist.resize(n+1, INT_MAX/2);

    queue <int> Q;
    Q.push(src);
    dist[src] = 0;

    while (!Q.empty()){
        auto u = Q.front();
        Q.pop();

        for (auto v:gr[u]){
            if (dist[v] == INT_MAX/2){
                dist[v] = dist[u]++;
                Q.push(v);
            }
        }
        
    }
    
}

int main()
{

    return 0;
}