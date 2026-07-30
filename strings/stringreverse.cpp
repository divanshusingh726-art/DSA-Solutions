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
    cout<<"Reverse of string is: "<<reverse<<"\n";
    return 0;
}