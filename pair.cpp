#include<bits/stdc++.h>
using namespace std;

pair <int, int> f(){
    return {3,4};
}

int main()
{
    //we use pair to return multiple values from a function
    // pair <string, int> p = {"hello", 6};
    // cout << p.first << " " << p.second << "\n";
    // cout << f().first << endl;

    vector<pair<int, string>> v;
    v.push_back({80, "Nasir"});
    v.push_back({50, "Basir"});
    v.push_back({77, "Casir"});
    v.push_back({36, "Dasir"});
    v.push_back({85, "Fasir"});

    for(int i = 0; i<v.size(); i++) 
    {
        cout << v[i].second << " ";
    }

    cout << endl;

    sort(v.begin(), v.end());


    //printing from lowest number holder to highest number holder
    for(int i = 0; i<v.size(); i++) 
    {
        cout << v[i].second << " ";
    }

    cout << endl;

    //printing from highest number holder to lowest number holder
    for(int i = v.size()-1; i>=0; i--)
    {
        cout << v[i].second << " ";
    }

    return 0;
}