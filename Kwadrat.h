//
// Created by pietyr on 5/26/24.
//

#ifndef KWADRAT_H
#define KWADRAT_H
#include <iostream>

#include "Obliczenia.h"
#include "Prostokat.h"


class Kwadrat: public Prostokat,public Obliczenia {
public:
    Kwadrat(string nazwa = "?", double bok = 0)
        : Prostokat(nazwa, bok, bok) {
    }

    virtual ~Kwadrat() {
        cout << "Kwadrat: " << nazwa
            << " kończy działanie" << endl;
    }

    virtual double promienKolaWgPola() override;
    virtual double promienOkreguWgObwodu() override;
    virtual std::string doTekstu();
};


#endif //KWADRAT_H
