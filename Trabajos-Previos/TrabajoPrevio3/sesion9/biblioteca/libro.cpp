#include <iostream>
#include "libro.hpp"

Libro::Libro(
    const std::string& titulo, const std::string& autor
): titulo(titulo), autor (autor){}

void Libro::mostrarInf() const {
    std::cout << "Titulo:" << titulo << ",Autor:" << autor << std::endl;
}