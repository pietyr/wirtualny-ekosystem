//
// Created by pietyr on 5/26/24.
//

#include "UrzadzenieElektryczne.h"

UrzadzenieElektryczne::UrzadzenieElektryczne(string m, bool s) {
    marka = m;
    stan = s;
}

void UrzadzenieElektryczne::wlacz() {
    stan = true;
}

void UrzadzenieElektryczne::wylacz() {
    stan = false;
}

string UrzadzenieElektryczne::jakaMarka() const {
    return marka;
}

bool UrzadzenieElektryczne::jakiStan() const {
    return stan;
}

void UrzadzenieElektryczne::wypisz() const {
    if (jakiStan())
        cout << marka << " jest włączony";
    else
        cout << marka << " jest wyłączony";
}

TV::TV(string m, bool s): UrzadzenieElektryczne(m, s) {
    kanal=1;
    glosnosc = 0;
    marka = m;
    stan = s;
}

void TV::podglosnij() {
    if(!stan && glosnosc < 10) {
        glosnosc++;
    }
}

void TV::scisz() {
    if(!stan && glosnosc > 0) {
        glosnosc--;
    }
}

void TV::zmienKanal(int k) {
    if(!stan) {
        stan = true;
    }

    if(k >= 1 && k<= 40) {
        kanal = k;
    }
}

void TV::wypisz() {
    if(stan) {
        cout<< marka << " jest wlaczony na kanale " <<  kanal <<"(glosnosc "<< glosnosc <<")" << endl;
    }else {
        cout<< marka << " jest wylaczony"  << endl;
    }
}

