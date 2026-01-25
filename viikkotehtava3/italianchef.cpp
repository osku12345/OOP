#include "ItalianChef.h"
#include <iostream>
#include <algorithm>

using namespace std;

ItalianChef::ItalianChef(string name)
    : Chef(name), password("pizza") {
    cout << "ItalianChef " << chefName << " constructor" << endl;
}

ItalianChef::~ItalianChef() {
    cout << "ItalianChef " << chefName << " destructor" << endl;
}

int ItalianChef::makePizza(int flour, int water) {
    cout << "ItalianChef " << chefName << " makes pizza" << endl;
    return min(flour / 5, water / 5);
}

bool ItalianChef::askSecret(string pw, int flour, int water) {
    if (pw == password) {
        cout << "Pizzas made: " << makePizza(flour, water) << endl;
        return true;
    }
    cout << "Wrong password!" << endl;
    return false;
}
