#include<bits/stdc++.h>
using namespace std;

int getFactorial(int n, int result = 1){
    if(n==0) return result;
    return getFactorial(n-1, n * result);
}

int main()
{
    cout << getFactorial(7000);
    return 0;
}