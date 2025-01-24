#include <iostream>

using namespace std;

int dropjes;

void aantal();

int main() {

    dropjes = 20;
    aantal();

    while (dropjes > 0) {
        cout << "Hoeveel dropjes wil je pakken? ";
        int gepakt;
        cin >> gepakt;

        if (gepakt > dropjes) {
            int teVeel = gepakt - dropjes;
            dropjes -= dropjes;
            cout << endl << "! Je probeerde " << teVeel << " te veel dropjes te pakken!" << endl;
            cout << "! Deze heb je natuurlijk niet kunnen pakken. Je hebt wel de bestaande dropjes gepakt!" << endl << endl;
        } else {
            dropjes -= gepakt;
        }

        aantal();
    }

    cout << endl << "! De pot is nu leeg!" << endl;

    return 0;
}

void aantal() {
    cout << "> " << dropjes << " dropjes!" << endl;
}