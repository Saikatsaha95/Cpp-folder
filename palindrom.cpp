#include<bits/stdc++.h>
using namespace std;

bool isPalindrom (string &s, int L, int R){
    if(L >= R) return true;
    return ((s[L] == s[R]) && isPalindrom(s, (L+1), (R-1)));
}

int main()
{
    string s = "12531";
    cout << isPalindrom(s, 0, s.size()-1);
   
    return 0;
}