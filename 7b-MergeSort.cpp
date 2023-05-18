#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000005;

int cnt = 0;

void mergeThem (vector <int> &v, int l, int m, int r)
{
    int s1 = m-l+1, s2 = r-m;

    vector <int> v1(s1), v2(s2);

    for(int i = 0; i<s1; i++){
        v1[i] = v[l+i];
    }
    for(int i = 0; i<s2; i++){
        v2[i] = v[m+1+i];
    }

    int i = 0, j = 0, k = l;
    while (i < s1 && j < s2){
        if (v1[i] < v2[j]){
            v[k] = v1[i];
            k++;
            i++;
        }
        else {
            v[k] = v2[j];
            k++;
            j++;
        }
        cnt++;
    }
    
    while (i < s1){
        v[k] = v1[i];
        k++;
        i++;
        cnt++;
    }
    while (j < s2){
        v[k] = v2[j];
        k++;
        j++;
        cnt++;
    } 

}

void mergeSort(vector <int> &v, int l, int r)     //O(nlogn)
{
    cnt++;

    if (l<r){
        int m = l+(r-l)/2;
        mergeSort(v, l, m);
        mergeSort(v, m+1, r);

        mergeThem(v, l, m, r);
    }
}

int main()
{   
    int n;
    cin>>n;

    vector <int> v(n);
    for (int i = 0; i < n; i++){
        cin>>v[i];
    }
    
    int m = n/2;
    // mergeThem(v, 0, m, n-1);
    mergeSort(v, 0, n-1);

    for (auto x:v)
        cout<<x<<" ";
    
    return 0;
} 