#include <iostream>

using namespace std;

bool isPrime(int a) {
    if(a < 2) {
        return false;
    }
    for(int i = 2; i <= a / 2; i++) {
        if(a % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int a;
    int wyjscie;
    do {
        cout << "MENU" << endl;
        cout << "Podaj numer czynnosci, ktora chcesz wykonac" << endl;
        cout << "0. Wyjscie" << endl;
        cout << "1. Silnia" << endl;
        cout << "2. Czy pierwsza" << endl;
        cin >> wyjscie;

        if(wyjscie == 2) {
            cout << "Wpisz liczbe by sprawdzic czy jest pierwsza: ";
            cin >> a;

            isPrime(a) ? cout << "Pierwsza" << endl : cout << "Zlozona" << endl;
        }

    } while(wyjscie != 0);
    return 0;
}
