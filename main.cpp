#include <iostream>
#include "organizm.h"
#include "ustawienia.h"

using namespace std;

// Lab 3
void drukujOrganizm(const Organizm& o);

// Lab 4
void wyswietl(UstawieniaSymulacji& UST) {
    cout << "Znak glon:" << UST.znakGlon
        << " zycieMin=" << UST.glonZycieMin
        << " zycieMax" << UST.glonZycieMax << endl;
}

int main() {
    //1. Dostęp do obiektu klasy UstawieniaSymulacji
    UstawieniaSymulacji& UST1 = UstawieniaSymulacji::pobierzUstawienia();
    UstawieniaSymulacji& UST2 = UstawieniaSymulacji::pobierzUstawienia();
    UstawieniaSymulacji& UST3 = UstawieniaSymulacji::pobierzUstawienia();

    cout << "Pobranie ustawien 3x" << endl;
    cout << "UST1: ";
    wyswietl(UST1);
    cout << "UST2: ";
    wyswietl(UST2);
    cout << "UST3: ";
    wyswietl(UST3);

    cout << endl << "Zmiana wartosci tylko 1x" << endl;
    UST2.glonZycieMax = 100;
    cout << "UST1: ";
    wyswietl(UST1);
    cout << "UST2: ";
    wyswietl(UST2);
    cout << "UST3: ";
    wyswietl(UST3);
    return 0;
}

void drukujOrganizm(const Organizm& o) {
    cout << "licznikZycia: "
        << o.stanLicznikaZycia()
        << " licznikPosilkow: "
        << o.stanLicznikaPosilkow() << endl
        << "limitPosilkow: "
        << o.limitPosilkow
        << " kosztPotomka: "
        << o.kosztPotomka << endl
        << "głodny: " << o.glodny()
        << " pączkujący: "
        << o.paczkujacy() << endl << endl;
}
