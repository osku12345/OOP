#include "asiakas.h"
#include <iostream>

using namespace std;

//Asiakas();
//Asiakas(string, double);
//string getNimi();
//void showSaldo();
//bool talletus(double);
//bool nosto(double);
//bool luotonMaksu(double);
//bool luotonNosto(double);

Asiakas::Asiakas()
{
    cout << "Asiakas: olen default konstruktorissa" << endl;

}

void Asiakas::showSaldo()
{
    cout << "Käyttötilin saldo: " << kayttotili.getBalance() << endl;
    cout << "Luottotilin saldo: " << luottotili.getBalance() << endl;

}

string Asiakas::getNimi()
{
    return nimi;
}

Asiakas::Asiakas(string name, double lr) : kayttotili(name), luottotili(name, lr)
{
    cout << "Asiakas: olen parametri konstruktorissa" << endl;
    nimi = name;

}

bool Asiakas::talletus(double sum)
{
   return kayttotili.deposit(sum);


}

bool Asiakas::tiliSiirto(double sum, Asiakas& kohde)
{
    if (sum <= 0.0) return false;

    if (!kayttotili.withdraw(sum)) return false;

    if (!kohde.kayttotili.deposit(sum)) {
        // varmuuden vuoksi rollback
        kayttotili.deposit(sum);
        return false;
    }

    return true;
}


bool Asiakas::nosto(double sum)
{
   return kayttotili.withdraw(sum);


}

bool Asiakas::luotonMaksu(double sum)
{
   return luottotili.deposit(sum);


}

bool Asiakas::luotonNosto(double sum)
{
  return  luottotili.withdraw(sum);


}

