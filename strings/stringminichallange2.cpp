#include<iostream>
using namespace std;

int main() {
    string str = "Programming";
    //print the original string
    cout << "Original string: " << str << endl;
    //convert the string to uppercase
    for (char &c : str){
        c = toupper(c);
    }
    cout << "Uppercase string: " << str << endl;
    //convert the string to lowercase
    for (char &c : str){
        c = tolower(c);
    }
    cout << "Lowercase string: " << str << endl;   
    //length of the string
    cout << "Length of the string: " << str.length() << endl;
    //vowel count in the string
    int vowelCount = 0; 
    int freq[26] = {0};
    for (char &c : str){
        c = tolower(c);
        freq[c - 'a']++;
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
            vowelCount++;
        }
    }
    cout << "Number of vowels in the string: " << vowelCount << endl;
    //consonant count in the string
    int consonantCount = str.length() - vowelCount;
    cout << "Number of consonants in the string: " << consonantCount << endl;
    // first non-repeating character in the string
    for (char &c : str){
        if (freq[c - 'a'] == 1){
            cout << "The first non-repeating character is: " << c << endl;
            break;
        }
    }
    return 0;
}