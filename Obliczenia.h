//
// Created by pietyr on 5/26/24.
//

#ifndef OBLICZENIA_H
#define OBLICZENIA_H


class Obliczenia {
protected:
    const double pi = 3.14;

public:
    virtual double promienKolaWgPola() = 0;
    virtual double promienOkreguWgObwodu() = 0;
    virtual ~Obliczenia();
};


#endif //OBLICZENIA_H
