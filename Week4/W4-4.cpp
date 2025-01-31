#include <iostream>
#include <string>

using namespace std;

int main() {

    char word[] = {'c', 'h', 'a', 'm', 'p', 'i', 'o', 'n', 's', 'h', 'i', 'p'};

    cout << word[0] << endl;
    cout << word[4] << endl;
    cout << word[sizeof(word)-1] << endl;

    return 0;

}