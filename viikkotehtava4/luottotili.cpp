#include "luottotili.h"
#include <iostream>
using namespace std;

//Luottotili();
//Luottotili(string, double);
//virtual bool deposit(double) override;
//virtual bool withdraw(double) override;

Luottotili::Luottotili() {
    cout << "olen Luottotili: default konstruktorissa" << endl;

}

Luottotili::Luottotili(string om, double lr) : Pankkitili(om)
{
    cout << "olen Luottotili: parametri konstruktorissa" << endl;
    luottoRaja = lr;
}

bool Luottotili::deposit (double sum)
{


    cout << "Olen Luottotili: velanmaksussa" << endl;
    cout << "saldo ennen:" << saldo << endl;
    cout << "saldo jälkeen: " << sum + saldo << endl;
    if ( (sum < 0) || ( (sum + saldo) > 0) ) return false;
    saldo += sum;
    return true;
}

bool Luottotili::withdraw (double sum)
{
    cout << "Luottoraja: " << luottoRaja << endl;
    cout << "Saldo ennen: " << saldo << endl;
    cout << "Saldo jälkeen: " << saldo - sum << endl;
    cout << "Olen Luottotili: velannostossa" << endl;
    if ( (sum < 0) || ( (std::abs(saldo) + sum) > luottoRaja)) return false;
    saldo -= sum;
    return true;
}
