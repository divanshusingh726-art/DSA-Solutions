#include<iostream>
using namespace std;
// Function to count the frequency of each character in a string
int main() {
    string str = "Apple Banana";
    int freq[26] = {0};
    for (char &c : str){
        c = tolower(c);
        freq[c - 'a']++;
    }
    for (int i = 0; i < 26; i++){
        if (freq[i] > 0){
            cout << char(i + 'a') << " : " << freq[i] << endl;
        }
    }
    return 0;
}