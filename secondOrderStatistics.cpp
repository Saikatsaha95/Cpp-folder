#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    set<int>s;
    int n;
    cin>> n;
    for(int i=0; i<n; i++)
    {
        int x;
        cin>> x;
        s.insert(x);
    }

    if(s.size() == 1){
        cout << "NO" << endl;
    }
    else{
        s.erase(s.begin());
        cout << *s.begin() << endl;
    }
    return 0;
}

