#include <iostream>
#include <vector>
#include "Persona.h"
#include "operadores_vector.h"

void ejemplo_persona() {
    Persona p1("Jose", 20);
    Persona p2;
//    std::cout << p1 << std::endl;
}

void imprimir_vector(const std::vector<int>& v) {
    for (const auto& item: v)
        std::cout << item << " ";
    std::cout << std::endl;
}

void ejemplo_vector() {
    std::vector<int> v1 = {10, 20, 30};
    auto v2 = -v1;
    auto v3 = negacion(v1);
    imprimir_vector(v2);
    imprimir_vector(v3);
}

int main() {
    ejemplo_vector();
    return 0;
}
