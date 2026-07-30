#include<iostream>
#include<string>
using namespace std;
// to find no. of vowels and consonent
int main() {
    string str;
    getline(cin,str);
    int vowel = 0;
    int cosonent = 0;
    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == 'A' || str[i] == 'E' || str[i] == 'I'|| str[i] == 'O'|| str[i] == 'U'|| str[i] == 'a'|| str[i] == 'e'|| str[i] == 'i' || str[i] == 'o'|| str[i] == 'u'){
            vowel++;
        }
        else {
            cosonent++;
        }

    }
    cout<<"Vowels: "<<vowel<<"\n";
    cout<<"Consonent: "<<cosonent<<"\n";
    
    return 0;
}