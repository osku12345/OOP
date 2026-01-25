#include <iostream>
#include "ItalianChef.h"

using namespace std;

int main() {

    ItalianChef chef("Mario");

    cout << "Salads: " << chef.makeSalad(20) << endl;
    cout << "Soups: " << chef.makeSoup(10) << endl;

    cout << endl;

    chef.askSecret("pizza", 25, 30);
    chef.askSecret("pizza", 25, 30);

    return 0;
}
