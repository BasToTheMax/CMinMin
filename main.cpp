#include <iostream>

int main() {
    int nummer;
    int teRadenNummer;

    srand(time(0));

    teRadenNummer = rand() % 11;

    std::cout << "Raad het getal (0-10). Typ een nummer: ";

    std::cin >> nummer;

    if (teRadenNummer == nummer) {
        std::cout << std::endl << "GOED! Het was: " << teRadenNummer << std::endl;
    } else {
        std::cout << std::endl << "FOUT! het was: " << teRadenNummer << std::endl;
    }

    return 0;
}