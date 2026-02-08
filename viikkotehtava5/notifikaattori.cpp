#include "notifikaattori.h"
#include <iostream>
using namespace std;

Notifikaattori::Notifikaattori() {
    cout << "N konst" << endl;
}

void Notifikaattori::lisaa(Seuraaja* lisSeuraajatPtr) {
    cout << "lis S" << endl;
    if (lisSeuraajatPtr == nullptr) return;

    lisSeuraajatPtr->next = seuraajat;
    seuraajat = lisSeuraajatPtr;
}

void Notifikaattori::poista(Seuraaja* poistSeuraajaPtr) {
    cout << "poist S" << endl;
    if (poistSeuraajaPtr == nullptr) return;
    if (seuraajat == nullptr) return;

    // poistetaan head
    if (seuraajat == poistSeuraajaPtr) {
        seuraajat = seuraajat->next;
        poistSeuraajaPtr->next = nullptr;
        return;
    }

    Seuraaja* prev = seuraajat;
    Seuraaja* cur  = seuraajat->next;

    while (cur != nullptr) {
        if (cur == poistSeuraajaPtr) {
            prev->next = cur->next;
            cur->next = nullptr;
            return;
        }
        prev = cur;
        cur = cur->next;
    }
}

void Notifikaattori::tulosta() {
    if (seuraajat == nullptr) {
        cout << "Ei seuraajia" << endl;
        return;
    }

    Seuraaja* cur = seuraajat;
    while (cur != nullptr) {
        cout << cur->getNimi() << endl;
        cur = cur->next;
    }
}

void Notifikaattori::postita(string viesti) {
    Seuraaja* cur = seuraajat;
    while (cur != nullptr) {
        cur->paivitys(viesti);
        cur = cur->next;
    }
}
