#ifndef OPERACIONESBASICAS_HPP
#define OPERACIONESBASICAS_HPP

#include "Matriz.hpp"
#include <stdexcept>

/**
 * @file OperacionesBasicas.hpp
 * @brief Clase de utilidad para realizar operaciones básicas con matrices.
 * @author Oscar Fuentes
 * @date 21-enero-2024
 * @license Publica General
 */

/**
 * @class OperacionesBasicas
 * @brief Clase de utilidad para realizar operaciones básicas con matrices.
 * @tparam T Tipo de dato de los elementos de las matrices.
 */
template <typename T>
class OperacionesBasicas {
public:
    // Métodos estáticos para operaciones
    /**
     * @brief Realiza la suma de dos matrices.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return Matriz resultante de la suma.
     * @throw std::invalid_argument si las dimensiones de las matrices no permiten la suma.
     */
    static Matriz<T> suma(const Matriz<T>& a, const Matriz<T>& b) {
        if (!validarSumaResta(a, b)) {
            throw std::invalid_argument("Las dimensiones de las matrices no permiten la suma");
        }
        return a.suma(b);
    }

    /**
     * @brief Realiza la resta de dos matrices.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return Matriz resultante de la resta.
     * @throw std::invalid_argument si las dimensiones de las matrices no permiten la resta.
     */
    static Matriz<T> resta(const Matriz<T>& a, const Matriz<T>& b) {
        if (!validarSumaResta(a, b)) {
            throw std::invalid_argument("Las dimensiones de las matrices no permiten la resta");
        }
        return a.resta(b);
    }

    /**
     * @brief Realiza la multiplicación de dos matrices.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return Matriz resultante de la multiplicación.
     * @throw std::invalid_argument si las dimensiones de las matrices no permiten la multiplicación.
     */
    static Matriz<T> multiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        if (!validarMultiplicacion(a, b)) {
            throw std::invalid_argument("Las dimensiones de las matrices no permiten la multiplicación");
        }
        return a.multiplicacion(b);
    }

    // Métodos estáticos de validación
    /**
     * @brief Valida si las dimensiones de dos matrices permiten la suma o la resta.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return true si las dimensiones son compatibles, false en caso contrario.
     */
    static bool validarSumaResta(const Matriz<T>& a, const Matriz<T>& b) {
        return a.getFilas() == b.getFilas() && a.getColumnas() == b.getColumnas();
    }

    /**
     * @brief Valida si las dimensiones de dos matrices permiten la multiplicación.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return true si las dimensiones son compatibles, false en caso contrario.
     */
    static bool validarMultiplicacion(const Matriz<T>& a, const Matriz<T>& b) {
        return a.getColumnas() == b.getFilas();
    }
};

#endif // OPERACIONESBASICAS_HPP
