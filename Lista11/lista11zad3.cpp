#include <iostream>

using namespace std;

string inputString;

string palindrom(string testString) {

    string newString = "";
    
    for (int x = testString.length() - 1; x >= 0; x--) {
        
        newString += testString.at(x);

    }

    return newString;

}

int main() {

    string inputString;

    cout << "Wprowadz tekst: ";
    cin >> inputString;
    cout << endl;

    if (inputString == palindrom(inputString))
        cout << "Podany tekst jest palindromem." << endl;
    else
        cout << "Podany tekst nie jest palindromem." << endl;

    return 0;

}