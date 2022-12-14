#include <bits/stdc++.h>
using namespace std;

#define left st, (st + en)/2, nd + nd
#define right (st+en)/2 + 1, en, nd + nd + 1

const int MAX = 100000;
int tree[4 * MAX], arr[MAX];

void buildTree(int st, int en, int nd)
{
  // TODO
}

int getSum(int st, int en, int nd, int L, int R)
{
  // TODO
}

void pointUpdate(int st, int en, int nd, int idx, int v)
{
  // TODO
}

int main()
{
  int n, L, R, q;
  cin >>n>>q;

  for (int i = 0; i < n; i++){
    cin>>arr[i];
  }

  buildTree(0, n - 1, 1);
  while(q--){
    cin>>L>>R;
    cout<<getSum(0, n - 1, 1, L, R) << "\n";
  }

  return 0;
}