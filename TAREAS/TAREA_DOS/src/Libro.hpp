/**
 * @file Libro.hpp
 * @brief Definición de la clase Libro.
 *
 * Este archivo contiene la definición de la clase Libro, que es una subclase de MaterialLectura.
 * Representa un libro con atributos como resumen y material relacionado.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#ifndef LIBRO_HPP
#define LIBRO_HPP

#include "MaterialLectura.hpp"
#include <string>

/**
 * @class Libro
 * @brief Clase que representa un libro.
 */
class Libro : public MaterialLectura {
private:
    std::string resumen;           ///< Resumen del libro.
    std::string materialRelacionado;///< Material relacionado al libro.

public:
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
    Libro(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int ch,
          const std::string& r, const std::string& mr);

    /**
     * @brief Método para imprimir la información del libro.
     *
     * Imprime la información detallada del libro, incluyendo título, autor, género, editorial, precio, páginas,
     * resumen y material relacionado.
     */
    void imprimirInfo() const override;

    /**
     * @brief Método para clasificar la longitud del libro.
     * @return Una cadena que describe la longitud del libro, como "Corto", "Mediano" o "Largo".
     */
    std::string clasificarLongitud() const;
};

#endif // LIBRO_HPP
