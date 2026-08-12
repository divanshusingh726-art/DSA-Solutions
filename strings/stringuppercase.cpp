#include<iostream>
#include<cctype>
using namespace std;
// Function to convert a string to uppercase
int main() {
    string str = "Hello, World!";
    for (char &c : str){
            c = toupper(c);
    }
    cout << str << endl;
    return 0;
}