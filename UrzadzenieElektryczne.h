//
// Created by pietyr on 5/26/24.
//

#ifndef URZADZENIEELEKTRYCZNE_H
#define URZADZENIEELEKTRYCZNE_H

#include <iostream>
#include <string>
using namespace std;

class UrzadzenieElektryczne {
protected:
    string marka;
    bool stan;

public:
    UrzadzenieElektryczne(string m, bool s = false);
    void wlacz();
    void wylacz();
    string jakaMarka() const;
    bool jakiStan() const;
    virtual void wypisz() const;
};

class TV: public UrzadzenieElektryczne {
private:
    int kanal;
    int glosnosc;

public:
    TV(string m, bool s = false);
    void podglosnij();
    void scisz();
    void zmienKanal(int k);
    void wypisz();

};

#endif //URZADZENIEELEKTRYCZNE_H
