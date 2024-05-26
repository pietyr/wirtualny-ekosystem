cmake_minimum_required(VERSION 3.28)
project(wirtualny_ekosystem)

set(CMAKE_CXX_STANDARD 20)

add_executable(wirtualny_ekosystem main.cpp
        organizm.cpp
        organizm.h
        ustawienia.h
        generatorLosowy.cpp
        generatorLosowy.h
        Sasiedztwo.cpp
        Sasiedztwo.h
        Prostokat.cpp
        Prostokat.h
        Kwadrat.cpp
        Kwadrat.h
        Obliczenia.cpp
        Obliczenia.h
        Mieszkaniec.cpp
        Mieszkaniec.h
        UrzadzenieElektryczne.cpp
        UrzadzenieElektryczne.h)
