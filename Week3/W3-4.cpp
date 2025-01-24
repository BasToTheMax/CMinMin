#include <algorithm>
#include <iostream>

using namespace std;

void films();

int main() {

    int voorkeur[5] = { 0, 0, 0, 0, 0 };
    int votes = 0;

    cout << "Om te stoppen, kies 9!" << endl;
    cout << "Klik ENTER om verder te gaan?" << endl;
    cin.get();

    for (int i = 0; i < 50; i++) {
        cout << endl;
    }

    bool verder = true;
    while (verder == true) {
        films();
        cout << "[" << votes << " votes] Welke film vind jij het leukste? (1-5)" << endl;
        cout << "Film: ";

        int gekozenFilm;
        cin >> gekozenFilm;

        if (gekozenFilm >= 0 && gekozenFilm <= 5) {
            voorkeur[gekozenFilm-1]++;
            cout << "Film " + gekozenFilm << " heeft nu " << voorkeur[gekozenFilm-1] << " stemmen!" << endl;
            votes++;
        } else if (gekozenFilm == 9) {
            verder = false;
            cout << endl << "Klaar!" << endl;
        } else {
            cout << "Invalid film!" << endl;
        }

    }

    films();
    for (int i = 0; i < 5; i++) {
        cout << "Film " << i+1 << " stemmen: " << voorkeur[i] << endl;
    }

    return 0;
}

void films() {
    cout << endl;
    cout << "1. Harry potter" << endl;
    cout << "2. Avatar" << endl;
    cout << "3. Pizza" << endl;
    cout << "4. Yes" << endl;
    cout << "5. Saaie film" << endl;
    cout << endl;
}