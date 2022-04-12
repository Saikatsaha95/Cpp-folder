#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    int x, y;

    cin >> x >> y;

    if(x >= y){
        cout << "1";
    }else {
        cout << "0";
    }


    return 0;
}