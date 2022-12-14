#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 100000;

vector <int> gr[MAX + 5];
bool vis[MAX + 5], col[MAX + 5];

void dfs(int u, int clr, bool &status)
{
    vis[u] = 1;
    col[u] = clr;

    // cout << "Visited " << u << "\n";
    // getchar();

    for (auto v : gr[u]){
        if (!vis[v]){
            dfs(v, clr ^ 1, status);
            if (!status) 
                return;
        }

        if (col[u] == col[v]){
            status = false;
            return;
        }
    }
    // cout << "Completed " << u << "\n";
    // getchar();
}

int main()
{
    int n, m; //n-> node, m-> edge
    cin>>n>>m;
    
    for (int i = 0; i < m; i++){
        int u, v;
        cin>>u>>v;

        gr[u].push_back(v);
        gr[v].push_back(u);
    }

    // for (int i = 1; i <= n; i++){
    //     if (!vis[i]){
    //         cout<<"Component found!\n";
    //         dfs(i, 0, status);
    //     }
    // }
    // getchar();

    bool status = true;
    dfs(1, 0, status);

    if (status) 
        cout<<"BICOLORABLE\n";
    else 
        cout<<"NOT BICOLORABLE\n";

    return 0;
}