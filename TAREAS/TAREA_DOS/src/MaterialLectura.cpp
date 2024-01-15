/**
 * @file MaterialLectura.cpp
 * @brief Implementación de la clase MaterialLectura.
 *
 * Define las funciones miembro de la clase MaterialLectura,
 * incluyendo su constructor y el método para imprimir información.
 * Esta clase extiende la clase Material con atributos específicos para materiales de lectura.
 * 
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#include "MaterialLectura.hpp"
#include <iostream>

/**
 * @brief Constructor de MaterialLectura.
 * Inicializa un nuevo objeto MaterialLectura con los valores dados.
 * 
 * @param t Título del material de lectura.
 * @param a Autor del material de lectura.
 * @param g Género del material de lectura.
 * @param e Estado del material de lectura.
 * @param p Precio del material de lectura.
 * @param ch Cantidad de hojas del material de lectura.
 */
MaterialLectura::MaterialLectura(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int ch)
    : Material(t, a, g, e, p), cantidadHojas(ch) {}

/**
 * @brief Imprime información detallada del material de lectura.
 * Sobrescribe el método imprimirInfo de la clase base Material para incluir
 * información adicional específica de materiales de lectura como la cantidad de hojas.
 */
void MaterialLectura::imprimirInfo() const {
    std::cout << "Titulo: " << titulo << "\nAutor: " << autor
              << "\nGenero: " << genero << "\nEstado: " << estado
              << "\nPrecio: " << precio << "\nCantidad de Hojas: " << cantidadHojas << std::endl;
}
