#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif

    map<string,int>freq;
    int n;
    cin >> n;
    for(int i=0; i<n; i++){
        string s;
        cin >> s;
        if(freq[s] ==0){
            cout << "OK" << endl;
        }
        else {
            cout << s << freq[s] << endl;
        }
        freq[s]++;
    }

    return 0;
}