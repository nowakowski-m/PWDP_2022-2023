#include <iostream>

using namespace std;

void zamiania(int* a, int* b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

void odwroc(int tablica[], int rozmiar)
{
    int *wskaznik1 = tablica,
 
        *wskaznik2 = tablica + rozmiar - 1;
    while (wskaznik1 < wskaznik2) {
        zamiania(wskaznik1, wskaznik2);
        wskaznik1++;
        wskaznik2--;
    }
}
 
void wypisz(int* tablica, int rozmiar)
{
    int *dlugosc_tablicy = tablica + rozmiar,
 
        *pozycja_w_tablicy = tablica;
    cout << "tablica: ";
    for (pozycja_w_tablicy = tablica; pozycja_w_tablicy < dlugosc_tablicy; pozycja_w_tablicy++)
        cout << *pozycja_w_tablicy << " ";
}
 
int main()
{
    int max_dlugosc;
    int tablica[] = { 5, 4, -3, 4, 2, -1, 6, -6, 2 };
    int tablica2[] = { 5, 4, -3, 4, 2, 6, -6, 2 };
    max_dlugosc = (sizeof(tablica)) / sizeof(int);
    // 4 bajty dla typu int
 
    cout << "Wprowadzona ";
    wypisz(tablica, max_dlugosc);
    cout << endl;
    
    cout << "Odwrocona ";
    odwroc(tablica, max_dlugosc);
    wypisz(tablica, max_dlugosc);
    cout << endl;

    cout << "Wprowadzona ";
    wypisz(tablica2, max_dlugosc-1);
    cout << endl;
    
    cout << "Odwrocona ";
    odwroc(tablica2, max_dlugosc-1);
    wypisz(tablica2, max_dlugosc-1);
    cout << endl;
    return 0;
}