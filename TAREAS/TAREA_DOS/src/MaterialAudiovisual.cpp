/**
 * @file MaterialAudiovisual.cpp
 * @brief Implementación de la clase MaterialAudiovisual.
 *
 * Define las funciones miembro de la clase MaterialAudiovisual,
 * incluyendo su constructor y el método para imprimir información.
 *
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#include "MaterialAudiovisual.hpp"
#include <iostream>

/**
 * @brief Constructor de MaterialAudiovisual.
 * Inicializa un nuevo objeto MaterialAudiovisual con los valores dados.
 * 
 * @param t Título del material.
 * @param a Autor o creador del material.
 * @param g Género del material.
 * @param e Editor o productor del material.
 * @param p Precio del material.
 * @param d Duración del material en minutos.
 */
MaterialAudiovisual::MaterialAudiovisual(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int d)
    : Material(t, a, g, e, p), duracion(d) {}

/**
 * @brief Imprime información detallada del material audiovisual.
 * Sobrescribe el método imprimirInfo de la clase base para incluir
 * la duración del material audiovisual.
 */
void MaterialAudiovisual::imprimirInfo() const {
    std::cout << "Titulo: " << titulo << "\nAutor: " << autor
              << "\nGenero: " << genero << "\nEstado: " << estado
              << "\nPrecio: " << precio << "\nDuración: " << duracion << " minutos" << std::endl;
}
