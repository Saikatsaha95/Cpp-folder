#include<bits/stdc++.h>
using namespace std;

int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    #endif
    string main_string; 
    string search_string;
    int i, j;
    getline(cin, main_string);
    getline(cin, search_string);

   for(i=0; i<main_string.length(); i++){
       for (j=0; j<search_string.length(); j++){
           if(main_string[i+j] != search_string[j]){
               break;
           }
       }
       if(j == search_string.size()){
           cout << i << endl;
       }
   }
    return 0;
}