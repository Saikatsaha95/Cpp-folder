#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    int n, q, op, t, x, i;
   
    cin >> n >> q;
    vector<vector<int>>vec(n);
    while(q--){
        
        cin >> op >> t;
        if(op == 0){            
            cin >> x;            
            vec[t].push_back(x);
        } 
        else if(op == 1){
            bool first = true;
            for(i = 0; i<vec[t].size(); i++){
                if(!first){
                    cout<< " ";
                }else{
                    first = false;
                }
                cout <<vec[t][i];

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