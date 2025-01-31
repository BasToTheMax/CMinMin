#include <iostream>
#include <string>

using namespace std;

int main() {

    string hobbys[5] = {};

    for (int i = 1; i <= 5; i++) {
        cout << "Hobby nummer " << i << ": ";
        cin >> hobbys[i-1];
        cout << endl << "Oke! Volgende hobby!" << endl;
    }

    for (int i = 1; i <= 50; i++) {
        cout << endl;
    }
    cout << "-----------------------" << endl;

    for (int i = 1; i <= 5; i++) {
        cout << "Hobby " << i <<  " is " << hobbys[i-1] << endl;
    }

    return 0;
}