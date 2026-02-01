#include <iostream>
#include "pankkitili.h"
#include "luottotili.h"
#include "asiakas.h"
using namespace std;

int main()
{
    cout << "Hello World!" << endl;
    Pankkitili pt1;
    Pankkitili pt2("Pete");
    Luottotili lt;
    Luottotili lt2 ("Make", 500);
    pt2.deposit(100);
    pt2.withdraw(50);
    double luettusaldo = pt2.getBalance();
    cout << "Peten luettu saldo: " << luettusaldo << endl;
    lt2.withdraw(100);
    lt2.deposit(50);
    luettusaldo = lt2.getBalance();
    cout << "Maken luettu luottosaldo: " << luettusaldo << endl;
    Asiakas a1("Matti", 500);
    Asiakas a2("Teppo", 300);

    cout << "\n--- Alkutilanne ---\n";
    cout << a1.getNimi() << ":\n"; a1.showSaldo();
    cout << a2.getNimi() << ":\n"; a2.showSaldo();

    cout << "\nMatti tallettaa 100 kayttotilille\n";
    cout << "Onnistui? " << (a1.talletus(100) ? "true" : "false") << "\n";

    cout << "\n--- Talletuksen jalkeen ---\n";
    cout << a1.getNimi() << ":\n"; a1.showSaldo();
    cout << a2.getNimi() << ":\n"; a2.showSaldo();

    cout << "\nSiirto 40 Matti -> Teppo (kayttotili -> kayttotili)\n";
    bool ok = a1.tiliSiirto(40, a2);
    cout << "Siirto onnistui? " << (ok ? "true" : "false") << "\n";

    cout << "\n--- Siirron jalkeen ---\n";
    cout << a1.getNimi() << ":\n"; a1.showSaldo();
    cout << a2.getNimi() << ":\n"; a2.showSaldo();
return 0;
}
