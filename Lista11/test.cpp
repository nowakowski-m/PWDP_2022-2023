#include <iostream>
using namespace std;

string input_str;
string str;
bool jestAnagramem;

void permute(string& a, int l, int r) {

    string tablica[a.length()];
    int pos = 0;

    if (l == r) {
        tablica[pos] = a;
        pos += 1;
    }

    else {

        for (int i = l; i <= r; i++) {
 
            swap(a[l], a[i]);
 
            permute(a, l + 1, r);
 
            swap(a[l], a[i]);
        }
    }

    if (tablica[0].find(input_str) != string::npos) {

        cout << "Jest anagramem.";
        jestAnagramem = true;
    }

}

int main()
{
    cout << "Wprowadź bazowy wyraz: ";
    cin >> input_str;
    cout << endl;

    cout << "Wprowadź wyraz do sprawdzenia: ";
    cin >> str;
    cout << endl;
    int n = str.size();

    permute(str, 0, n - 1);
    if (jestAnagramem == false)
        cout << "Nie jest anagramem.";
    return 0;
}