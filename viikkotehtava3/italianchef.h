#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H


#include "Chef.h"
#include <string>

class ItalianChef : public Chef {
private:
    std::string password;
    int makePizza(int flour, int water);

public:
    ItalianChef(std::string name);
    ~ItalianChef();

    bool askSecret(std::string pw, int flour, int water);
};


#endif // ITALIANCHEF_H
