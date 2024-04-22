#include <iostream>
#include "organizm.h"

using namespace std;

void drukujOrganizm(const Organizm& o);

int main() {


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
