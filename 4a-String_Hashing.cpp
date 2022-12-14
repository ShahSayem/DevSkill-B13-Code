#include <bits/stdc++.h>
#define ll long long
using namespace std;

void isEqualStr(string s1, string s2)
{
    cout<<"Postions: ";
    for (int i = 0; i+s2.size() <= s1.size(); i++){ //O(n*n = n^2)
        if (s1.substr(i, s2.size()) == s2){
            cout<<i<<" ";
        }
    }
    cout<<"\n";
}

int main()
{
    //Test
    unsigned int a = 1, b = 2;
    cout<<a-b<<"\n"; //overflow
    
    string s1, s2;
    cout<<"Enter two srting to know whether they equal or not: ";
    cin>>s1>>s2;

    isEqualStr(s1, s2);

    return 0;
} 
  
