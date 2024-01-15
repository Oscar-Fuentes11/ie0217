/**
 * @file Material.cpp
 * @brief Implementación de la clase abstracta Material.
 *
 * Define la implementación del constructor de la clase Material.
 * La implementación del método imprimirInfo() se deja a las clases derivadas.
 * 
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#include "Material.hpp"
#include <iostream>

/**
 * @brief Constructor de Material.
 * Inicializa un nuevo objeto Material con los valores dados.
 * 
 * @param t Título del material.
 * @param a Autor del material.
 * @param g Género del material.
 * @param e Estado del material.
 * @param p Precio del material.
 */
Material::Material(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p)
    : titulo(t), autor(a), genero(g), estado(e), precio(p) {}

// Nota: La implementación de imprimirInfo() se manejará en las clases derivadas.
