#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n, q, op, t, x, i;
    cin >> n >> q;
    vector<int>vec[n];
    while(q--){
        cin >> op >> t;
        if(op == 0){
            cin >> x;
            vec[t].push_back(x);
        } 
        else if(op == 1){
            for(i = 0; i<vec[t].size(); i++){
                cout << vec[t][i] << " ";
            }
            cout << endl;
        }
        else if(op == 2){
            if(vec[t].size() != 0){
                vec[t].clear();
            }
        }
    }

    return 0;
}