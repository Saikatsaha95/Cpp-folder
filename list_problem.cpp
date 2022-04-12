#include<bits/stdc++.h>
using namespace std;

int main()
{
    list <int> lst;
    auto cursor = lst.begin();
    cout << *cursor;
    int lst_size, operation, add_value, distance;
    cin >> lst_size;

    while(lst_size--){
        cin>> operation;
        if(operation == 0){
            cin >> add_value;
            cursor = lst.insert(cursor, add_value);
            cout << "Cursor= " << *cursor;
        }
        else if(operation == 1){
            cin >> distance;
            advance(cursor, distance);
        }
        else if(operation == 2){
            auto it = cursor;
            cursor++;
            lst.erase(it);
        }

    }

    for(auto elm: lst){
        cout << elm << endl;
    }


    return 0;
}