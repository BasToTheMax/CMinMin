#include <iostream>


using namespace std;

int main() {
    int lengte;
    int breedte;
    int oppervlakte;

    cout << "Wat is de lengte (meter)?" << endl;
    cin >> lengte;

    cout << "Wat is de breedte (meter)?" << endl;
    cin >> breedte;;

    cout << "Brekenen..." << endl;

    oppervlakte = lengte * breedte;

    cout << "De oppervlakte in (m2) is: " + to_string(oppervlakte) << endl;


    return 0;
}