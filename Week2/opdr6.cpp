#include <iostream>

using namespace std;

int main() {

    int bak1 = 7;
    int bak2 = 10;
    int bak3 = 0;

    // Print het begin
    cout << "Bak 1 heeft " << bak1 << " vissen!" << endl;
    cout << "Bak 2 heeft " << bak2 << " vissen!" << endl;
    cout << "Bak 3 (tijdelijk) heeft " << bak3 << " vissen!" << endl;

    cout << "------------------" << endl;

    swap(bak1, bak2);

    /* bak3 = bak1;
    bak1 = bak2;
    bak2 = bak3;
    bak3 = 0; */

    // Print het einde
    cout << "Bak 1 heeft " << bak1 << " vissen!" << endl;
    cout << "Bak 2 heeft " << bak2 << " vissen!" << endl;
    cout << "Bak 3 (tijdelijk) heeft " << bak3 << " vissen!" << endl;

    return 0;
}