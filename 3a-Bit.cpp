#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool checkBit(int n, int p)
{
    int exp = 1<<p;

    return (n & exp) == exp;
}

void setBit(int &n, int p)
{
    n = n|(1<<p);
}

void toggleBit(int &n, int p)
{
    n = n^(1<<p);
}

int main()
{
    int n;
    cout<<"Enter a value to check it's Bits: ";
    cin>>n;

    for (int i = 7; i >= 0; i--){
        cout<<checkBit(n, i)<<" ";
    }
    cout<<"\n";

    int opt;
    cout<<"\n#Options:\n1.setBit\n2.toggle\nEnter option: ";
    cin>>opt;

    if (opt == 1){
        setBit(n, 6);
        cout<<"Value after setBit(p=6): "<<n<<"\n";
    }
    else if (opt == 2){
        toggleBit(n, 2);
        cout<<"Value after toggleBit(p=2): "<<n<<"\n";
    }
    //cout<<(0^0)<<" "<<(1^0)<<" "<<(1^1)<<"\n";
    

    return 0;
} 
  
