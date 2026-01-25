#include "Chef.h"
#include <iostream>

using namespace std;

Chef::Chef(string name) : chefName(name) {
    cout << "Chef " << chefName << " constructor" << endl;
}

Chef::~Chef() {
    cout << "Chef " << chefName << " destructor" << endl;
}

int Chef::makeSalad(int ingredients) {
    cout << "Chef " << chefName << " makes salad" << endl;
    return ingredients / 5;
}

int Chef::makeSoup(int ingredients) {
    cout << "Chef " << chefName << " makes soup" << endl;
    return ingredients / 3;
}
