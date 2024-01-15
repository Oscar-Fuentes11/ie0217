/**
 * @file Noticia.cpp
 * @brief Implementación de la clase Noticia.
 *
 * Este archivo contiene la implementación de los métodos de la clase Noticia, que es una subclase de MaterialLectura.
 * Los métodos incluyen la impresión de información y la clasificación de la longitud de la noticia.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#include "Noticia.hpp"
#include <iostream>

/**
 * @brief Constructor de la clase Noticia.
 * @param t Título de la noticia.
 * @param a Autor de la noticia.
 * @param g Género de la noticia.
 * @param e Editorial de la noticia.
 * @param p Precio de la noticia.
 * @param ch Cantidad de páginas de la noticia.
 * @param r Resumen de la noticia.
 * @param mr Material relacionado a la noticia.
 */
Noticia::Noticia(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int ch,
                 const std::string& r, const std::string& mr)
    : MaterialLectura(t, a, g, e, p, ch), resumen(r), materialRelacionado(mr) {}

/**
 * @brief Método para imprimir la información de la noticia.
 *
 * Imprime la información detallada de la noticia, incluyendo título, autor, género, editorial, precio, páginas,
 * resumen y material relacionado.
 */
void Noticia::imprimirInfo() const {
    MaterialLectura::imprimirInfo();
    std::cout << "Resumen: " << resumen << "\nMaterial Relacionado: " << materialRelacionado << std::endl;
}

/**
 * @brief Método para clasificar la longitud de la noticia.
 * @return Una cadena que describe la longitud de la noticia, como "Corta", "Mediana" o "Larga".
 */
std::string Noticia::clasificarLongitud() const {
    if (cantidadHojas <= 5) return "Corta";
    if (cantidadHojas <= 10) return "Mediana";
    return "Larga";
}
