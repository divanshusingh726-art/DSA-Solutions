#include<iostream>
using namespace std;
// Function to check if two strings are anagrams
int main() {
    string str1 = "listen";
    string str2 = "silent";
    int a1[26] = {0};
    int a2[26] = {0};
    for (char &c : str1){
        c = tolower(c);
        a1[c - 'a']++;
    }
    for (char &c : str2){
        c = tolower(c);
        a2[c - 'a']++;
    }
    bool isAnagram = true;
    for (int i = 0; i < 26; i++){
        if (a1[i] != a2[i]){
            isAnagram = false;
            break;
        }
    }
    if (isAnagram){
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}