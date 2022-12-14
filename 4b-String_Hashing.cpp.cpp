#include <bits/stdc++.h>
#define ll long long
using namespace std;

#define BASE 29 // to avoid collision we use a prime grater than 26
#define MAX_SIZE 10000005
#define MOD 1000000007 //10^9 + 7 or 1e9 + 7

ll h[MAX_SIZE+5], po[MAX_SIZE+5];
void generatePrefixHash(string &s)
{
    h[0] = s[0]; // storing ascii value
    for (int i = 1; i < s.size(); i++){
        h[i] = ((h[i-1]*BASE) + s[i]) % MOD;
    }

    po[0] = 1; //po[x] = po[x-1]*BASE
    for (int i = 1; i <= s.size(); i++){
        po[i] = (po[i-1]*BASE) % MOD;
    }
}

ll generateHash(string &s)
{
    ll H = 0;
    for (auto x:s)
        H = (H*BASE + x) % MOD;

    return H;
}

ll getHash(int l, int r) // hash(s[l...r]) --> s = "aabccd" --> getHash(0, 3) = aabc
{
    if (l == 0)
        return h[r];

    return (h[r]-(h[l-1]*po[r-l+1]%MOD)+MOD)%MOD;
}

int main()
{    
    string s1, s2;
    cout<<"Enter two srting to know whether they equal or not: ";
    cin>>s1>>s2;

    generatePrefixHash(s1);

    ll hashOfS2 = generateHash(s2);
    cout<<"Positions: ";
    for (int i = 0; i+s2.size() <= s1.size(); i++){ //O(n)
        if (getHash(i, i+s2.size()-1) == hashOfS2){
            cout<<i<<" ";
        }
    }
    cout<<"\n";

    return 0;
} 
  
