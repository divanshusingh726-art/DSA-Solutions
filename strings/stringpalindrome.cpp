#include<iostream>
#include<string>
//to reverse a string
using namespace std;

int main() {
    string str;
    getline(cin, str);
    string reverse = "";
    for (int i = str.length() - 1; i >= 0; i--){
        reverse += str[i];
    }
    if (str == reverse){
        cout<<"string is palindrome\n";
    }
    else{
        cout<<"string is not palindrome\n";
    }
    return 0;
}