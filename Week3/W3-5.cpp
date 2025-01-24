#include <iostream>

using namespace std;

int main() {

    int uurKosten = 50;
    int maxGasten = 50;
    int klantOmzet = 15;

    int aantalUur;
    int aantalGasten;

    cout << "Welkom!" << endl;
    cout << "Aantal gasten? (max " << maxGasten << ")" << endl;
    cin >> aantalGasten;
    if (aantalGasten < 0) {
        cout << "Het aantal gasten moet een positief getal zijn!" << endl;
        return 1;
    }
    if (aantalGasten > maxGasten) {
        cout << "Het aantal gasten kan maximaal " << maxGasten << " zijn!" << endl;
        return 1;
    }

    cout << "Oke! Aantal uur?" << endl;
    cin >> aantalUur;
    if (aantalUur < 0) {
        cout << "Aantal uur moet een positief getal zijn!" << endl;
        return 1;
    }

    int totaalKost = uurKosten * aantalUur;
    int totaalOmzet = klantOmzet * aantalGasten * aantalUur;

    cout << "Kosten: €" << totaalKost << endl;
    cout << "Omzet: €" << totaalOmzet << endl;

    int winst = totaalOmzet - totaalKost;

    cout << "> Het aantal winst: €" << winst << endl;

    return 0;

}