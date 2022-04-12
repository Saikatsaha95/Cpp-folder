#include<bits/stdc++.h>
using namespace std;

int main()
{
    int x = 5;
    cout << x << endl; //5
    cout << x++ << endl; //5 
    cout << x+++x++ << endl; // 6+7 = 13; x = 8
    cout << x << endl; // 8
    cout << x---x-- << endl; // 8 - 7 =1; x= 6
    cout << x << endl; //x= 6
    return 0;
}
