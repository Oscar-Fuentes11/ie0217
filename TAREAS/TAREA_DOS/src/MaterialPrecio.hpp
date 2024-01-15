/**
 * @file MaterialPrecio.hpp
 * @brief Definición de la clase MaterialPrecio.
 *
 * Este archivo contiene la definición de la clase MaterialPrecio, que se encarga de almacenar y ordenar materiales de lectura por precio.
 * Permite agregar materiales y ordenarlos por precio de forma ascendente o descendente.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#ifndef MATERIALPRECIO_HPP
#define MATERIALPRECIO_HPP

#include "Material.hpp"
#include <vector>

/**
 * @class MaterialPrecio
 * @brief Clase que almacena y ordena materiales de lectura por precio.
 */
class MaterialPrecio {
private:
    std::vector<Material*> materiales; ///< Vector que almacena los materiales de lectura.

    /**
     * @brief Ordena los materiales por precio utilizando el algoritmo Bubble Sort.
     * @param ascendente Si es true, se ordena de forma ascendente; de lo contrario, se ordena de forma descendente.
     */
    void bubbleSort(bool ascendente);

public:
    /**
     * @brief Agrega un material a la lista.
     * @param material Puntero al material que se desea agregar.
     */
    void agregarMaterial(Material* material);

    /**
     * @brief Imprime los materiales ordenados por precio.
     * @param ascendente Si es true, se imprime en orden ascendente; de lo contrario, se imprime en orden descendente.
     */
    void imprimirOrdenado(bool ascendente);
};

#endif // MATERIALPRECIO_HPP
