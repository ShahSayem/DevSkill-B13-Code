#include <bits/stdc++.h>
#define ll long long
using namespace std;

void solve(){
    
    stack <int> stk;
    stk.push(1);
    stk.push(2);
    stk.push(3);
    stk.push(4);

    cout<<stk.top()<<"\n";

    stk.pop();
    cout<<stk.top()<<"\n";

    stack < vector <int> > stk2;

    stk2.push({1, 2, 3});
    stk2.push({1, 2, 3, 4, 5});

    vector <int> v(3);
    cout<<"\nEnter 3 int: ";
    for (int i = 0; i < 3; i++){
        cin>>v[i];
    }
    stk2.push(v);

    for (int i = 0; i < 3; i++){
        vector <int> tp = stk2.top();
        stk2.pop();

        cout<<"\n";
        for(auto it:tp)
            cout<<it<<" ";
    }
    cout<<"\n";
    

    string r,q;
    stack < pair<string, string> > stk3;
    // cin>>r>>q;
    stk3.push(make_pair("sayem", "ahmad"));

    pair <string, string> pr = stk3.top();
  
    cout<<pr.first<<" "<<pr.second;


    
        
}

int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    
    // int t;
    // cin>>t;
    // while (t--){
        solve();
        cout<<"\n";
    // }

    return 0;
} 
  
