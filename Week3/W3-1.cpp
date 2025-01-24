#include <iostream>

using namespace std;

int main() {

    cout <<  "Voer een getal in: ";
    int getal;
    cin >> getal;

    if (getal > 2) {
        cout << "Het getal is groter dan 2" << endl;
    } else if (getal < 2) {
        cout << "Het getal is kleiner dan 2" << endl;
    } else {
        cout << "Het getal is 2";
    }

    return 0;
}