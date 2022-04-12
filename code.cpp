#include<bits/stdc++.h>
using namespace std;

int main() //execution starts from here
{
    // cout << "hello world!\n";
    // cout << sizeof(char)<< "\n";
    vector <int> v = {5, 4, 1, 2};
    sort(v.begin(), v.end());

    for(int i = 0; i< v.size(); i++){
        cout << v[i] << "\n";
    }

 

    return 0;
}

// int 32 bit er signed integer save korte pare
// long long int 64 bit er number rakhte parbe