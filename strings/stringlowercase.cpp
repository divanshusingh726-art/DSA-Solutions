#include<iostream>
#include<cctype>
using namespace std;
// Function to convert a string to lowercase
int main() {
    string str = "hello World";
    for (char &c : str){
        c = tolower(c);

    }
    cout << str << endl;
    return 0;
}