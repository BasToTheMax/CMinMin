#include <iostream>

int main() {

    int broodjesTotaal = 0;

    for (int i = 1; i <= 5; i++) {
        std::cout << "(" << i << "/5) Hoeveel broodjes heb je gegeten vandaag?" << std::endl;
        int gegetenBroodjes;
        std::cin >> gegetenBroodjes;
        broodjesTotaal += gegetenBroodjes;
    }

    std::cout << "Er zijn " << broodjesTotaal << " broodjes gegeten!" << std::endl;

    return 0;
}