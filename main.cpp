#include <iostream>
#include "organizm.h"
#include "ustawienia.h"
#include "generatorLosowy.h"
#include "Kwadrat.h"
#include "Sasiedztwo.h"
#include "UrzadzenieElektryczne.h"

using namespace std;

// Lab 3
void drukujOrganizm(const Organizm& o);

// Lab 4
void wyswietl(UstawieniaSymulacji& UST) {
    cout << "Znak glon:" << UST.znakGlon
        << " zycieMin=" << UST.glonZycieMin
        << " zycieMax" << UST.glonZycieMax << endl;
}

string nazwaRodzaju(RodzajMieszkanca rodzaj) {
    switch (rodzaj) {
    case GLON: return "GLON";
    case GRZYB: return "GRZYB";
    case BAKTERIA: return "BAKTERIA";
    case PUSTKA: return "PUSTKA";
    case SCIANA: return "ŚCIANA";
    case TRUP: return "TRUP";
    case NIEZNANE: return "NIEZNANE";
    }
}

int main() {
    // Lab 5
    Sasiedztwo sasiedztwo;

    sasiedztwo.okreslSasiada(P, GLON);
    sasiedztwo.okreslSasiada(PG, GRZYB);
    sasiedztwo.okreslSasiada(G, GRZYB);
    sasiedztwo.okreslSasiada(LG, GLON);
    sasiedztwo.okreslSasiada(L, BAKTERIA);
    sasiedztwo.okreslSasiada(LD, BAKTERIA);
    sasiedztwo.okreslSasiada(D, GLON);
    sasiedztwo.okreslSasiada(PD, PUSTKA);

    cout << "Przegląd sąsiedztwa:" << endl;

    for (int i = 0; i < 8; i++) {
        Polozenie p = static_cast<Polozenie>(i);
        RodzajMieszkanca
            r = sasiedztwo.ktoJestSasiadem(p);

        cout << "polozenie=" << p << " rodzaj="
            << nazwaRodzaju(r) << endl;
    }

    cout << endl << "Policzenie sasiadów"
        << "określonego rodzaju:" << endl
        << " glony=" << sasiedztwo.ile(GLON) << endl
        << " grzyby=" << sasiedztwo.ile(GRZYB) << endl
        << " trupy=" << sasiedztwo.ile(TRUP) << endl;

    cout << endl << "Wylosowanie sasiada:" << endl
        << " glon -> "
        << sasiedztwo.losujSasiada(GLON) << endl
        << " pustka -> "
        << sasiedztwo.losujSasiada(PUSTKA) << endl
        << " trup -> "
        << sasiedztwo.losujSasiada(TRUP) << endl;


    long wiersz, kolumna;
    cout << endl
        << "Zmiana indeksów [5][7]"
        << "wg polozenia:" << endl;

    for (int i = 0; i < 8; i++) {
        Polozenie p = static_cast<Polozenie>(i);
        wiersz = 5;
        kolumna = 7;

        Sasiedztwo::
            zmienIdeksyWgPolozenia(p, wiersz, kolumna);

        cout << " położenie: " << p << " ->[" << wiersz
            << "][" << kolumna << "]" << endl;
    }

    cout << endl;

    // Lab 6

    Kwadrat k1;
    Kwadrat k2("Drugi kwadrat", 4);
    cout << k1.doTekstu() << endl << endl;
    cout << k2.doTekstu() << endl << endl;
    Kwadrat kwadrat("Kwadrek", 4);

    Kwadrat& refDoKwadrat = kwadrat;

    double r0 = refDoKwadrat.promienKolaWgPola();
    double r1 = refDoKwadrat.promienOkreguWgObwodu();

    cout << "ro=" << r0 << endl
        << "r1=" << r1 << endl;


    // Urzadzenie

    UrzadzenieElektryczne u1("LG");
    u1.wypisz();
    cout << endl;
    u1.wlacz();
    u1.wypisz();
    cout << endl;
    cout << "stan = " << u1.jakiStan() << endl;
    cout << "marka = " << u1.jakaMarka() << endl;

    TV tv1("Samsung", true);
    tv1.wypisz();
    tv1.zmienKanal(50);
    tv1.podglosnij();
    tv1.wypisz();
    tv1.scisz();
    tv1.scisz();
    tv1.wypisz();
    tv1.wylacz();
    tv1.wypisz();

    TV tv2("Philips");
    tv2.wypisz();
    tv2.wlacz();
    tv2.wypisz();

    UrzadzenieElektryczne *u2 = &tv2;
    u2->wypisz();
    u2->wylacz();
    u2->wypisz();
    // LAB 4.3
    // cout << "Liczby losowe typu int:" << endl;
    // cout << " od 0 do 5: ";
    // for (int i = 0; i < 10; i++) {
    //     cout << GEN::losujOdZeraDo(5) << " ";
    // }
    // cout << endl << " od 0 do 3: ";
    // for (int i = 0; i < 10; i++) {
    //     cout << GEN::losujOdZeraDo(3) << " ";
    // }
    // cout << endl << " od 0 do 20: ";
    // for (int i = 0; i < 10; i++) {
    //     cout << GEN::losujOdZeraDo(20) << " ";
    // }
    //
    // cout << endl << endl;
    //
    // cout << "Liczby losowe typu long: " << endl;
    // cout << " od -2 do 2:";
    // for (int i = 0; i < 10; i++) {
    //     cout << GEN::losujPomiedzy(-2L, 2L) << " ";
    // }
    //
    // cout << endl << endl
    //     << "Liczby losowe typu unsigned short: " << endl;
    // cout << " od 2 do 6: ";
    // unsigned short min = 2, max = 6;
    // for (int i = 0; i < 10; i++) {
    //     cout << GEN::losujPomiedzy(max, min) << " ";
    // }
    // cout << endl << endl;


    // LAB 3
    /*
    // Test kreacji obiektów
    Organizm organizm1(8, 3, 2);
    Organizm organizm2 = organizm1;
    Organizm organizm3(organizm1);

    cout << "Wynik testu kreacji obiektów:" << endl << endl;
    cout << "Organizm1:" << endl;
    drukujOrganizm(organizm1);
    cout << "Organizm2:" << endl;
    drukujOrganizm(organizm2);
    cout << "Organizm3:" << endl;
    drukujOrganizm(organizm3);

    // Test niezależności obiektów
    organizm1.posilek();
    organizm1.posilek();
    organizm2.posilek();
    organizm3.krokSymulacji();

    cout << "Wynik testu niezależności obiektów: " << endl << endl;
    cout << "Organizm1:" << endl;
    drukujOrganizm(organizm1);
    cout << "Organizm2:" << endl;
    drukujOrganizm(organizm2);
    cout << "Organizm3:" << endl;
    drukujOrganizm(organizm3);

    // Test symulacji
    Organizm organizm4(8, 3, 2);

    cout << "Wynik testu symulacji: " << endl << endl;
    cout << "Stan początkowy:" << endl;
    drukujOrganizm(organizm4);

    for(int i = 1; i < 11; i++) {
        organizm4.krokSymulacji();

        if(organizm4.paczkujacy()) {
            organizm4.potomek();
            cout << "---> Potomek" << endl;
        }else {
            organizm4.posilek();
        }

        cout << "Po wykonaniu kroku symulacji: " << i << endl;
        drukujOrganizm(organizm4);
    }
    */

    // LAB 4.1, 4.2
    // //1. Dostęp do obiektu klasy UstawieniaSymulacji
    // UstawieniaSymulacji& UST1 = UstawieniaSymulacji::pobierzUstawienia();
    // UstawieniaSymulacji& UST2 = UstawieniaSymulacji::pobierzUstawienia();
    // UstawieniaSymulacji& UST3 = UstawieniaSymulacji::pobierzUstawienia();
    //
    // cout << "Pobranie ustawien 3x" << endl;
    // cout << "UST1: ";
    // wyswietl(UST1);
    // cout << "UST2: ";
    // wyswietl(UST2);
    // cout << "UST3: ";
    // wyswietl(UST3);
    //
    // cout << endl << "Zmiana wartosci tylko 1x" << endl;
    // UST2.glonZycieMax = 100;
    // cout << "UST1: ";
    // wyswietl(UST1);
    // cout << "UST2: ";
    // wyswietl(UST2);
    // cout << "UST3: ";
    // wyswietl(UST3);


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
