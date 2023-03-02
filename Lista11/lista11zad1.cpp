#include <iostream>

float x;

using namespace std;

int main () {

    cout << "Wprowadz liczbe do sprawdzenia jej podzielnosci przez 3: ";
    cin >> x;
    cout << endl;

    if ((x/3) == int(x/3))
        cout << "Liczba " << x << " jest podzielna przez 3." << endl;
    else
        cout << "Liczba " << x << " nie jest podzielna przez 3." << endl;

    return 0;

}