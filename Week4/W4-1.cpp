#include <iostream>

using namespace std;

int main() {

    string groep[5] = {};

    for (int i = 1; i <= 5; i++) {
        cout << "Naam deelnemer " << i << ": ";
        cin >> groep[i-1];
        cout << endl << "Oke! Volgende!" << endl;
    }

    cout << "-----------------------" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Deelnemer " << i <<  ": " << groep[i-1] << endl;
    }

    return 0;
}