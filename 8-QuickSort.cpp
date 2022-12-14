#include <bits/stdc++.h>
using namespace std;

typedef long long ll;
const long double pi = 3.14159265358979323846;
const ll MOD = 1e9+7;
const int MAX = 1000005;

mt19937 rng(0); //it's a random generator, rng -> variable name
                //it is better than rand, because of it's range

int createPartition(vector <int> &nums, int l, int r)
{
    int piVot = nums[r];
    int i = l-1;
    for (int j = l; j < r; j++){
        if (nums[j] <= piVot){
            i++;
            swap(nums[i], nums[j]);
        }
    }
    swap(nums[i+1], nums[r]);

    return i+1;
}

//sorts the vector nums in [l, r] range
void quickSort(vector <int> &nums, int l, int r)
{
    if(l<r){
        int p = createPartition(nums, l, r); // [L, R] -> [vi] <= nums[p] <= [vj]
        quickSort(nums, l, p-1);
        quickSort(nums, p+1, r);
    }
}

int main()
{   
    int n;
    cin>>n;

    vector <int> nums(n);
    for (int i = 0; i < n; i++){
        cin>>nums[i];
    } 

    shuffle(nums.begin(), nums.end(), rng); //shuffle randomlly to avoid worst case
    quickSort(nums, 0, n-1);

    if (is_sorted(nums.begin(), nums.end()))
        cout<<"Sorted correctly\n";
    else 
        cout<<"Not sorted correctly\n";

    for (auto x:nums)
        cout<<x<<" ";
    return 0;
} 