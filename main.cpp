
#include <iostream>
using namespace std;

int main() {

    int ziel = 24;
    int zahl;

    cout << "Willkommen beim Zahlenratespiel!" << endl;
    cout << "Rate eine Zahl: ";

    cin >> zahl;

    (ziel == zahl && cout << "Glueckwunsch, richtig geraten!\n");
    (ziel > zahl && cout << "Rate eine groessere Zahl!\n");
    (ziel < zahl && cout << "Rate eine kleinere Zahl!\n");

    return 0;
}
