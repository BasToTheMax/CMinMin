#include <iostream>

using namespace std;

int main() {

    int geld = 500;

    cout << "> €" << geld << endl;

    cout << "Je hebt op het moment €" << geld << " op je rekening staan!" << endl;
    cout << "Hoeveel euro wil je opnemen?     € ";
    int opgenomen;
    cin >> opgenomen;

    if (opgenomen > geld) {
        cout << "!!! Je hebt niet genoeg geld om zoveel op te nemen. Als je dit toch opneemt kom je in de min! Weet je zeker dat je het geld wilt opnemen? !!!" << endl;
        cout << "Y/N ?" << endl;
        char keuze;
        cin >> keuze;

        if (keuze == 'N') {
            cout << "Goede keuze!" << endl;
        } else {
            cout << "Opnemen..." << endl;
            geld -= opgenomen;
        }
    } else {
        geld -= opgenomen;
    }

    cout << "> €" << geld << endl;
    cout << "Hoeveel geld wil je storten?" << endl;

    int gestort;
    cin >> gestort;
    geld += gestort;

    cout << "€" << gestort << " gestort!" << endl;

    cout << "> €" << geld << endl;

    return 0;
}