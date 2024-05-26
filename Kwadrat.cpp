//
// Created by pietyr on 5/26/24.
//

#include "Kwadrat.h"

string Kwadrat::doTekstu() {
    string napis = "";
    napis = "Kwadrat o nazwie: " + nazwa
        + " bok=" + to_string(bok1);
    if (poprawny)
        napis += " obwod=" + to_string(obwod)
            + " pole=" + to_string(pole);
    else napis += " !Figura niepoprawna.";
    return napis;
}
