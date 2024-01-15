/**
 * @file Pelicula.cpp
 * @brief Implementación de la clase Pelicula.
 *
 * Define las funciones miembro de la clase Pelicula,
 * incluyendo su constructor y los métodos para imprimir información y clasificar por duración.
 *
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#include "Pelicula.hpp"
#include <iostream>

/**
 * @brief Constructor de Pelicula.
 * Inicializa un nuevo objeto Pelicula con los valores dados, incluyendo los atributos
 * de la clase base y los específicos de Pelicula como resumen y material relacionado.
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
Pelicula::Pelicula(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int d, 
                   const std::string& r, const std::string& mr)
    : MaterialAudiovisual(t, a, g, e, p, d), resumen(r), materialRelacionado(mr) {}

/**
 * @brief Imprime información detallada de la película.
 * Sobrescribe el método imprimirInfo de la clase base MaterialAudiovisual para incluir
 * información adicional específica de la película como el resumen y el material relacionado.
 */
void Pelicula::imprimirInfo() const {
    MaterialAudiovisual::imprimirInfo();
    std::cout << "Resumen: " << resumen << "\nMaterial Relacionado: " << materialRelacionado << std::endl;
}

/**
 * @brief Clasifica la película según su duración.
 * Determina si la duración de la película es corta, mediana o larga.
 * 
 * @return Una cadena de texto que indica la clasificación de la duración de la película.
 */
std::string Pelicula::clasificarDuracion() const {
    if (duracion <= 90) return "Corta";
    if (duracion <= 150) return "Mediana";
    return "Larga";
}
