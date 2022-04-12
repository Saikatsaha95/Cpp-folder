#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int>s;
    s.insert(6);
    s.insert(1);
    s.insert(10);
    s.insert(3);
    s.insert(7);

    

    cout << *s.begin() << endl;
    cout << *s.end() << endl;
    return 0;
}