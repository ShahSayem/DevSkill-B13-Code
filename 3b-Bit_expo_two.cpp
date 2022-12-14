#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool isPowerOfTwo(int n)
{
    return (n & (n-1)) == 0;
}

int main()
{
    int n;
    cout<<"Enter a value to get it's exponents of 2: ";
    cin>>n;

    for (int i = 1; i <= n; i++){
        if (isPowerOfTwo(i))
            cout<<i<<" ";
    }

    return 0;
} 
  
