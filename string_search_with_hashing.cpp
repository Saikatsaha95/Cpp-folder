#include<bits/stdc++.h>
using namespace std;


void matchpattern(string text, string pattern, int q){
    int i, j;
    int base_value = 29;
    int h=1;
    int pattern_length = pattern.size();
    int text_length = text.size();
    int pattern_hash_value=0;
    int text_hash_value = 0;

    for(i = 0; i<pattern_length-1; i++){
        h = (h*base_value)%q;      
    }

    for(i=0; i<pattern_length; i++){
        pattern_hash_value = (base_value * pattern_hash_value + pattern[i]) % q;
        text_hash_value = (base_value * text_hash_value + text[i]) % q;     
    }

    for (i = 0; i< text_length; i++){
        if(pattern_hash_value == text_hash_value){
            for(j = 0; j< pattern_length; j++){
                if(text[i+j] != pattern[j]){
                    break;
                }
            }

            if(j == pattern_length){
                cout << i << endl;
            }
        }

        else {
            text_hash_value = (base_value * (text_hash_value - text[i] * h) + text[i + pattern_length]) % q;
        
        }
    }

}

int main()
{
    string text, pattern;
    int q = 1000000007;

    getline(cin, text);
    getline(cin, pattern);

    matchpattern(text, pattern, q);
    return 0;
}