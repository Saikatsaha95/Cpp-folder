#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    string text, pattern;
    getline(cin, text); 
    getline(cin, pattern);
    auto found = text.find(pattern);
    
    if(found != string::npos){
        cout << found<< endl;
    }
    return 0;
}