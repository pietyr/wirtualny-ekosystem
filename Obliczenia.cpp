//
// Created by pietyr on 5/26/24.
//

#include "Obliczenia.h"
#include <cmath>

#include "Kwadrat.h"


Obliczenia::~Obliczenia() {
}

double Kwadrat::promienKolaWgPola() {
    return sqrt(pole / pi);
}

double Kwadrat::promienOkreguWgObwodu() {
    return obwod / (2 * pi);
}
