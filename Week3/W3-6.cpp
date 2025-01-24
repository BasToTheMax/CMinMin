#include <iostream>

using namespace std;

int main() {

    bool isGoed = false;

    while (isGoed == false) {
        cout << "------------" << endl;
        cout << "> OPTIES:" << endl;
        cout << "> 1 - koffie" << endl;
        cout << "> 2 - thee" << endl;
        cout << "> 3 - melk" << endl;
        cout << "> 4 - chocolademelk" << endl;
        cout << "------------" << endl;
        cout << "Maak een keuze:" << endl;

        int keuze;
        string keuzeNaam;
        cin >> keuze;

        switch (keuze) {
            case 1:
                cout << "Hier zit wel veel caffeine in" << endl;
                keuzeNaam = "koffie";
                isGoed = true;
                break;
            case 2:
                cout << "A cup of tea!" << endl;
                keuzeNaam = "thee";
                isGoed = true;
                break;
            case 3:
                cout << "Saai!" << endl;
                keuzeNaam = "melk";
                isGoed = true;
                break;
            case 4:
                cout << "Lekker!" << endl;
                keuzeNaam = "chocolademelk";
                isGoed = true;
                break;
            default:
                cout << "! Deze drank bestaat niet!" << endl;
        }

        cout << "> Je gaat " << keuzeNaam << " drinken!" << endl;

    }

    return 0;

}