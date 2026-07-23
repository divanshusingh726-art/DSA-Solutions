#include<iostream>
#include<string>
using namespace std;
//finding lenght of string without using lenght function
int main() {
    string str;
    getline(cin, str);
    int lenght = 0;
    for (int i = 0; str[i] != '\0'; i++){
        lenght++;
    }
    cout<<"Length of string is: "<<lenght<<"\n";
    return 0;
}