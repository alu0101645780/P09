#include<iostream>
#include<cctype>
using namespace std;

string CapitalizeVowels(string str) {
    for (int i = 0; i < str.length(); i++) {
        if (isalpha(str[i])) {
            if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
                str[i] = toupper(str[i]);
            } else {
                str[i] = tolower(str[i]);
            }
        }
    }
    return str;
}

int main() {
    string str;
    cin >> str;

    cout << CapitalizeVowels(str) << endl;

    return 0;
}