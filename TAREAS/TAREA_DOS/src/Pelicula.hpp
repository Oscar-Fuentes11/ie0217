/**
 * @file Pelicula.hpp
 * @brief Clase para manejar información de películas.
 *
 * Esta clase hereda de MaterialAudiovisual y se utiliza para representar
 * películas. Incluye información específica como un resumen y material
 * relacionado con la película.
 *
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#ifndef PELICULA_HPP
#define PELICULA_HPP

#include "MaterialAudiovisual.hpp"
#include <string>

/**
 * @class Pelicula
 * @brief Clase que representa una película.
 *
 * Extiende la clase MaterialAudiovisual para añadir características
 * específicas de películas, como un resumen y material relacionado.
 */
class Pelicula : public MaterialAudiovisual {
private:
    std::string resumen; ///< Resumen de la película.
    std::string materialRelacionado; ///< Material relacionado con la película.

public:
    /**
     * @brief Constructor para Pelicula.
     * Inicializa una nueva película con los valores dados.
     * 
     * @param t Título de la película.
     * @param a Autor o director de la película.
     * @param g Género de la película.
     * @param e Editor o productor de la película.
     * @param p Precio de la película.
     * @param d Duración de la película en minutos.
     * @param r Resumen de la película.
     * @param mr Material relacionado con la película.
     */
    Pelicula(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int d, 
             const std::string& r, const std::string& mr);

    /**
     * @brief Imprime información detallada de la película.
     * Sobrescribe el método imprimirInfo de la clase base para incluir
     * información específica de la película.
     */
    void imprimirInfo() const override;

    /**
     * @brief Clasifica la película según su duración.
     * @return Una cadena de texto que indica la clasificación de la duración.
     */
    std::string clasificarDuracion() const;
};

#endif // PELICULA_HPP
