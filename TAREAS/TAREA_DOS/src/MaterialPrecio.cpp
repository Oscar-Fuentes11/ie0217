/**
 * @file MaterialPrecio.cpp
 * @brief Implementación de la clase MaterialPrecio.
 *
 * Este archivo contiene la implementación de los métodos de la clase MaterialPrecio, que se encarga de almacenar y ordenar materiales de lectura por precio.
 * Incluye la implementación de la ordenación mediante el algoritmo Bubble Sort y la impresión ordenada de los materiales.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#include "MaterialPrecio.hpp"
#include <iostream>

/**
 * @brief Agrega un material a la lista.
 * @param material Puntero al material que se desea agregar.
 */
void MaterialPrecio::agregarMaterial(Material* material) {
    materiales.push_back(material);
}

/**
 * @brief Ordena los materiales por precio.
 * @param ascendente Si es true, se ordena de forma ascendente; de lo contrario, se ordena de forma descendente.
 */
void MaterialPrecio::bubbleSort(bool ascendente) {
    bool swapped;
    for (size_t i = 0; i < materiales.size() - 1; i++) {
        swapped = false;
        for (size_t j = 0; j < materiales.size() - i - 1; j++) {
            if ((ascendente && materiales[j]->getPrecio() > materiales[j + 1]->getPrecio()) ||
                (!ascendente && materiales[j]->getPrecio() < materiales[j + 1]->getPrecio())) {
                std::swap(materiales[j], materiales[j + 1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

/**
 * @brief Imprime los materiales ordenados por precio.
 * @param ascendente Si es true, se imprime en orden ascendente; de lo contrario, se imprime en orden descendente.
 */
void MaterialPrecio::imprimirOrdenado(bool ascendente) {
    bubbleSort(ascendente);
    for (auto& material : materiales) {
        material->imprimirInfo();
        std::cout << "-----------------------\n";
    }
}
