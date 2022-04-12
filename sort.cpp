#include<bits/stdc++.h>
using namespace std;

int main()
{
    int a[4] = {5, 4, 1, 2};
    sort(a, a+3); // a[n] sort(a, a+n)

    for(int i= 0; i< 4; i++){
        cout << a[i] << " ";
    }

    cout << "\n";

    vector <int> v = {5, 4, 1, 2};
    sort(v.begin(), v.end());

    for(int i = 0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}