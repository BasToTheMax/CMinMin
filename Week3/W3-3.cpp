#include <iostream>

using namespace std;

int main() {

    int leerlingen = 0;
    int totaalCijfer = 0;
    int gemiddelde;

    cout << "Hoeveel leerlingen heeft de klas? ";
    cin >> leerlingen;

    cout << endl;

    for (int i = 1; i <= leerlingen; i++) {
        cout << "Welk cijfer heeft leerling " << i << " gehaald? ";
        int cijfer;
        cin >> cijfer;

        cout << endl;

        totaalCijfer += cijfer;
    }

    cout << "Klaar! Berekenen..." << endl;

    gemiddelde = totaalCijfer / leerlingen;

    cout << "> Gemiddelde: " << gemiddelde << endl;

    return 0;
}