#include<iostream>
#include<string>
using namespace std;

int main() {
    string str;
    getline(cin, str);
    int vowel = 0;
    int cosonent = 0;
    cout<<"Length of string is: "<<str.length()<<"\n";
    for (int i = 0; i < str.length(); i++){
        
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'|| str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'){
            vowel++;
        }
        else {
            cosonent++;
        }
    }
    cout<<"Vowels: "<<vowel<<"\n";
    cout<<"Consonent: "<<cosonent<<"\n";
    string reverse = "";
    for (int i = str.length() - 1; i >= 0; i--){
        reverse += str[i];
    }
    cout<<"Reverse of string is: "<<reverse<<"\n";
    if (str == reverse){
        cout<<"string is palindrome\n";
    }
    else{
        cout<<"string is not palindrome\n";
    }
    return 0;
}