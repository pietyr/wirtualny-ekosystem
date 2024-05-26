//
// Created by pietyr on 5/26/24.
//

#include "Mieszkaniec.h"

Mieszkaniec::Mieszkaniec(char _symbol) {
    symbol = _symbol;
}

Mieszkaniec::Mieszkaniec(const Mieszkaniec& mieszkaniec) {
    symbol = mieszkaniec.symbol;
}

char Mieszkaniec::jakiSymbol() const {
    return symbol;
}

Mieszkaniec::~Mieszkaniec() {
}
