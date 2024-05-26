//
// Created by pietyr on 5/26/24.
//

#include "Prostokat.h"
#include <iostream>

bool Prostokat::czyPoprawny(double bok1, double bok2) {
    return bok1 > 0 && bok2 > 0;
}

void Prostokat::obliczObwod() {
    obwod = 2 * (bok1 + bok2);
}

void Prostokat::obliczPole() {
    pole = bok1 * bok2;
}

Prostokat::Prostokat(string n, double a, double b)
    : nazwa(n) {
    poprawny = czyPoprawny(a, b);

    if (poprawny) {
        bok1 = a;
        bok2 = b;
        obliczPole();
        obliczObwod();
    }
    else {
        bok1 = bok2 = pole = obwod = 0;
    }
}


Prostokat::~Prostokat() {
    std::cout << "Prostokąt: " << nazwa
        << " znika." << std::endl;
}

bool Prostokat::czyPoprawny() {
    return poprawny;
}

const std::string& Prostokat::jakaNazwa() {
    return nazwa;
}

double Prostokat::podajPole() {
    return pole;
}

double Prostokat::podajObwod() {
    return obwod;
}

bool Prostokat::zmienBoki(double a, double b) {
    if (czyPoprawny(a, b)) {
        poprawny = true;
        bok1 = a;
        bok2 = b;
        obliczPole();
        obliczObwod();
        return true;
    }
    return false;
}

std::string Prostokat::doTekstu() {
    std::string napis = "";

    napis = "Prostokąt o nazwie: " + nazwa
        + " bok1=" + to_string(bok1)
        + " bok2=" + to_string(bok2);

    if (poprawny)
        napis += " obwód=" + to_string(obwod)
            + " pole=" + to_string(pole);
    else napis += " !Figura niepoprawna.";

    return napis;
}
