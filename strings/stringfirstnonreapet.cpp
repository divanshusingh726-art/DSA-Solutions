#include<iostream>
#include<cctype>
using namespace std;
// to fing the first non-repeating character in a string

int main() {
    string str = "aabbccddeffgg";
    int freq[26] = {0};
    for (char &c : str){
        c = tolower(c);
        freq[c - 'a']++;
    }
    for (char &c : str){
        if (freq[c - 'a'] == 1){
            cout << "The first non-repeating character is: " << c << endl;
            break;
        }
    }
    return 0;
}