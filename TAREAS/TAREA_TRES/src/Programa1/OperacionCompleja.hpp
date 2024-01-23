#ifndef OPERACIONCOMPLEJA_HPP
#define OPERACIONCOMPLEJA_HPP

#include "Matriz.hpp"
#include <complex>
#include <type_traits>

/**
 * @file OperacionCompleja.hpp
 * @brief Clase de utilidad para realizar operaciones con matrices de números complejos.
 * @author Oscar Fuentes
 * @date 21-enero-2024
 * @license Publica General
 */

/**
 * @class OperacionCompleja
 * @brief Clase de utilidad para realizar operaciones con matrices de números complejos.
 * @tparam T Tipo de dato de los elementos de las matrices de números complejos.
 */
template <typename T>
class OperacionCompleja {
    static_assert(std::is_same<T, std::complex<float>>::value || std::is_same<T, std::complex<double>>::value, 
                  "OperacionCompleja solo soporta std::complex<float> y std::complex<double>");

public:
    /**
     * @brief Realiza la suma de dos matrices de números complejos.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return Matriz resultante de la suma.
     * @throw std::invalid_argument si las dimensiones de las matrices no permiten la suma.
     */
    static Matriz<T> sumarComplejas(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.obtenerFilas() != b.obtenerFilas() || a.obtenerColumnas() != b.obtenerColumnas()) {
            throw std::invalid_argument("Las dimensiones de las matrices deben ser iguales para la suma.");
        }

        Matriz<T> resultado(a.obtenerFilas(), a.obtenerColumnas());
        for (int i = 0; i < a.obtenerFilas(); ++i) {
            for (int j = 0; j < a.obtenerColumnas(); ++j) {
                resultado.datos[i][j] = a.datos[i][j] + b.datos[i][j];
            }
        }
        return resultado;
    }

    /**
     * @brief Realiza la resta de dos matrices de números complejos.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return Matriz resultante de la resta.
     * @throw std::invalid_argument si las dimensiones de las matrices no permiten la resta.
     */
    static Matriz<T> restarComplejas(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.obtenerFilas() != b.obtenerFilas() || a.obtenerColumnas() != b.obtenerColumnas()) {
            throw std::invalid_argument("Las dimensiones de las matrices deben ser iguales para la resta.");
        }

        Matriz<T> resultado(a.obtenerFilas(), a.obtenerColumnas());
        for (int i = 0; i < a.obtenerFilas(); ++i) {
            for (int j = 0; j < a.obtenerColumnas(); ++j) {
                resultado.datos[i][j] = a.datos[i][j] - b.datos[i][j];
            }
        }
        return resultado;
    }

    /**
     * @brief Realiza la multiplicación de dos matrices de números complejos.
     * @param a Matriz A.
     * @param b Matriz B.
     * @return Matriz resultante de la multiplicación.
     * @throw std::invalid_argument si las dimensiones de las matrices no permiten la multiplicación.
     */
    static Matriz<T> multiplicarComplejas(const Matriz<T>& a, const Matriz<T>& b) {
        if (a.obtenerColumnas() != b.obtenerFilas()) {
            throw std::invalid_argument("El número de columnas de la primera matriz debe ser igual al número de filas de la segunda para la multiplicación.");
        }

        Matriz<T> resultado(a.obtenerFilas(), b.obtenerColumnas());
        for (int i = 0; i < resultado.obtenerFilas(); ++i) {
            for (int j = 0; j < resultado.obtenerColumnas(); ++j) {
                for (int k = 0; k < a.obtenerColumnas(); ++k) {
                    resultado.datos[i][j] += a.datos[i][k] * b.datos[k][j];
                }
            }
        }
        return resultado;
    }
};

#endif // OPERACIONCOMPLEJA_HPP
