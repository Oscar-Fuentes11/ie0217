/**
 * @file MaterialOrdenado.cpp
 * @brief Implementación de la clase MaterialOrdenado.
 *
 * Este archivo contiene la implementación de los métodos de la clase MaterialOrdenado, que se encarga de almacenar y gestionar una lista de materiales de lectura ordenados.
 * Incluye la implementación de operaciones como agregar, eliminar, buscar y mostrar materiales de lectura.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#include "MaterialOrdenado.hpp"
#include <iostream>

/**
 * @brief Destructor de la clase MaterialOrdenado.
 * Libera la memoria de los materiales almacenados en el vector.
 */
MaterialOrdenado::~MaterialOrdenado() {
    for (auto& material : materiales) {
        delete material;
    }
}

/**
 * @brief Agrega un material a la lista.
 * @param material Puntero al material que se desea agregar.
 */
void MaterialOrdenado::agregarMaterial(Material* material) {
    materiales.push_back(material);
}

/**
 * @brief Elimina un material de la lista por título.
 * @param titulo Título del material que se desea eliminar.
 */
void MaterialOrdenado::eliminarMaterial(const std::string& titulo) {
    for (auto it = materiales.begin(); it != materiales.end(); ++it) {
        if ((*it)->getTitulo() == titulo) {
            delete *it;
            materiales.erase(it);
            return;
        }
    }
}

/**
 * @brief Busca un material por título.
 * @param titulo Título del material que se desea buscar.
 * @return Puntero al material si se encuentra, nullptr si no se encuentra.
 */
Material* MaterialOrdenado::buscarMaterial(const std::string& titulo) const {
    for (auto& material : materiales) {
        if (material->getTitulo() == titulo) {
            return material;
        }
    }
    return nullptr;
}

/**
 * @brief Imprime la lista de materiales.
 * Imprime la información de todos los materiales almacenados en la lista.
 */
void MaterialOrdenado::imprimirMateriales() const {
    for (auto& material : materiales) {
        material->imprimirInfo();
        std::cout << "-----------------------\n";
    }
}
