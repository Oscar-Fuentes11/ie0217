/**
 * @file MaterialOrdenado.hpp
 * @brief Definición de la clase MaterialOrdenado.
 *
 * Este archivo contiene la definición de la clase MaterialOrdenado, que se encarga de almacenar y gestionar una lista de materiales de lectura ordenados.
 * Permite agregar, eliminar, buscar y imprimir materiales de lectura.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#ifndef MATERIALORDENADO_HPP
#define MATERIALORDENADO_HPP

#include "Material.hpp"
#include <vector>
#include <string>

/**
 * @class MaterialOrdenado
 * @brief Clase que almacena y gestiona materiales de lectura ordenados.
 */
class MaterialOrdenado {
private:
    std::vector<Material*> materiales; ///< Vector que almacena los materiales de lectura.

public:
    /**
     * @brief Destructor de la clase MaterialOrdenado.
     * Libera la memoria de los materiales almacenados en el vector.
     */
    ~MaterialOrdenado();

    /**
     * @brief Agrega un material a la lista.
     * @param material Puntero al material que se desea agregar.
     */
    void agregarMaterial(Material* material);

    /**
     * @brief Elimina un material de la lista por título.
     * @param titulo Título del material que se desea eliminar.
     */
    void eliminarMaterial(const std::string& titulo);

    /**
     * @brief Busca un material por título.
     * @param titulo Título del material que se desea buscar.
     * @return Puntero al material si se encuentra, nullptr si no se encuentra.
     */
    Material* buscarMaterial(const std::string& titulo) const;

    /**
     * @brief Imprime la lista de materiales.
     * Imprime la información de todos los materiales almacenados en la lista.
     */
    void imprimirMateriales() const;
};

#endif // MATERIALORDENADO_HPP
