#include <iostream>

int main() {

    int cijferTotaal = 0;
    int gemiddelde = 0;

    for (int i = 1; i <= 5; i++) {
     // Vraag voor cijfer
        char vraag[] = "Welk cijfer heb je gehaald op de toets?";
        std::cout << vraag << std::endl;

        int gehaaldCijfer;
        std::cin >> gehaaldCijfer;

        cijferTotaal += gehaaldCijfer;

    }

    gemiddelde = cijferTotaal / 5;

    std::string gemiddeldeTekst = "Het gemiddelde is een " + std::to_string(gemiddelde) + "!";
    std::cout << gemiddeldeTekst << std::endl;

    return 0;
}