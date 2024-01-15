/**
 * @file Noticia.hpp
 * @brief Definición de la clase Noticia.
 *
 * Este archivo contiene la definición de la clase Noticia, que es una subclase de MaterialLectura.
 * Representa una noticia con atributos como resumen y material relacionado.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#ifndef NOTICIA_HPP
#define NOTICIA_HPP

#include "MaterialLectura.hpp"
#include <string>

/**
 * @class Noticia
 * @brief Clase que representa una noticia.
 */
class Noticia : public MaterialLectura {
private:
    std::string resumen;           ///< Resumen de la noticia.
    std::string materialRelacionado;///< Material relacionado a la noticia.

public:
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
    Noticia(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int ch,
            const std::string& r, const std::string& mr);

    /**
     * @brief Método para imprimir la información de la noticia.
     *
     * Imprime la información detallada de la noticia, incluyendo título, autor, género, editorial, precio, páginas,
     * resumen y material relacionado.
     */
    void imprimirInfo() const override;

    /**
     * @brief Método para clasificar la longitud de la noticia.
     * @return Una cadena que describe la longitud de la noticia, como "Corta", "Mediana" o "Larga".
     */
    std::string clasificarLongitud() const;
};

#endif // NOTICIA_HPP
