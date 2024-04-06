//
// Created by rrivas on 5/04/2024.
//

#ifndef SEMANA1_CLASES_CONCRETAS_PERSONA_H
#define SEMANA1_CLASES_CONCRETAS_PERSONA_H

#include <string>

class Persona {
private:
    std::string nombre;
    int edad = 0;
public:
    Persona() = default;

    // Definicion In place (En el lugar)
//    Persona(std::string pnombre, int pedad): nombre(pnombre), edad(pedad) {
//    }

    Persona(std::string pnombre, int pedad);

};


#endif //SEMANA1_CLASES_CONCRETAS_PERSONA_H
