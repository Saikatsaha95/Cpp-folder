#include<bits/stdc++.h>
using namespace std;

int main()
{
    vector <int> vect;
    int array_size, operation, add_value, index_value;
    cin >> array_size;

    while(array_size--){
        cin >> operation;
        if(operation == 0){
            cin >> add_value;
            vect.push_back(add_value);
        }

        else if (vect.size() !=0 && operation == 1){
            cin >> index_value;
            cout << vect[index_value] << endl;

        }
        else if (vect.size() != 0 && operation ==2){
            vect.pop_back();
        }
    }

    return 0;
}