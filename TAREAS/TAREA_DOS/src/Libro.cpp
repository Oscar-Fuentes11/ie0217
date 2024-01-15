/**
 * @file Libro.cpp
 * @brief Implementación de la clase Libro.
 *
 * Este archivo contiene la implementación de los métodos de la clase Libro, que es una subclase de MaterialLectura.
 * Los métodos incluyen la impresión de información y la clasificación de la longitud del libro.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#include "Libro.hpp"
#include <iostream>

/**
 * @brief Constructor de la clase Libro.
 * @param t Título del libro.
 * @param a Autor del libro.
 * @param g Género del libro.
 * @param e Editorial del libro.
 * @param p Precio del libro.
 * @param ch Cantidad de páginas del libro.
 * @param r Resumen del libro.
 * @param mr Material relacionado al libro.
 */
Libro::Libro(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int ch,
             const std::string& r, const std::string& mr)
    : MaterialLectura(t, a, g, e, p, ch), resumen(r), materialRelacionado(mr) {}

/**
 * @brief Método para imprimir la información del libro.
 *
 * Imprime la información detallada del libro, incluyendo título, autor, género, editorial, precio, páginas,
 * resumen y material relacionado.
 */
void Libro::imprimirInfo() const {
    MaterialLectura::imprimirInfo();
    std::cout << "Resumen: " << resumen << "\nMaterial Relacionado: " << materialRelacionado << std::endl;
}

/**
 * @brief Método para clasificar la longitud del libro.
 * @return Una cadena que describe la longitud del libro, como "Corto", "Mediano" o "Largo".
 */
std::string Libro::clasificarLongitud() const {
    if (cantidadHojas <= 100) return "Corto";
    if (cantidadHojas <= 200) return "Mediano";
    return "Largo";
}
