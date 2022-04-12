#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int, int> m;

    cout << m[15] << endl; //instantly create the element and the value will be 0 if the element is not present in the map

    map <int, int> freq;
    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;
    freq[10]++;

    cout << freq[10] << endl;

    map<string, int>name;

    name["kashim"];

    cout<< name["kashim"] << endl;

    name["kashim"] = name["kashim"] + 1;

    cout<< name["kashim"] << endl;
    name["kashim"];

    cout<< name["kashim"] << endl;




    return 0;
}