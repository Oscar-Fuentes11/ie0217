#ifndef MATRIZ_HPP
#define MATRIZ_HPP

#include <vector>
#include <iostream>
#include <complex>
#include <stdexcept>

/**
 * @file Matriz.hpp
 * @brief Definición de la clase Matriz y sus operadores.
 * @author Oscar Fuentes
 * @date 21-enero-2024
 * @license Publica General
 */

/**
 * @class Matriz
 * @brief Clase que representa una matriz genérica.
 * @tparam T Tipo de dato de los elementos de la matriz.
 */
template <typename T>
class Matriz {
public:
    /**
     * @brief Constructor de la clase Matriz.
     * @param filas Número de filas de la matriz.
     * @param columnas Número de columnas de la matriz.
     */
    Matriz(int filas, int columnas) : filas(filas), columnas(columnas) {
        datos = std::vector<std::vector<T>>(filas, std::vector<T>(columnas));
    }

    /**
     * @brief Sobrecarga del operador [] para acceso a elementos de la matriz.
     * @param index Índice de fila.
     * @return Referencia a la fila de la matriz.
     */
    std::vector<T>& operator[](int index) {
        return datos[index];
    }

    /**
     * @brief Sobrecarga del operador [] constante para acceso a elementos de la matriz.
     * @param index Índice de fila.
     * @return Referencia constante a la fila de la matriz.
     */
    const std::vector<T>& operator[](int index) const {
        return datos[index];
    }

    /**
     * @brief Sobrecarga del operador + para la suma de matrices.
     * @param otra Matriz a sumar.
     * @return Matriz resultante de la suma.
     * @throw std::invalid_argument si las dimensiones son incompatibles.
     */
    Matriz<T> operator+(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Dimensiones incompatibles para la suma de matrices");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] + otra.datos[i][j];
            }
        }
        return resultado;
    }

    /**
     * @brief Sobrecarga del operador - para la resta de matrices.
     * @param otra Matriz a restar.
     * @return Matriz resultante de la resta.
     * @throw std::invalid_argument si las dimensiones son incompatibles.
     */
    Matriz<T> operator-(const Matriz<T>& otra) const {
        if (filas != otra.filas || columnas != otra.columnas) {
            throw std::invalid_argument("Dimensiones incompatibles para la resta de matrices");
        }
        Matriz<T> resultado(filas, columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                resultado.datos[i][j] = datos[i][j] - otra.datos[i][j];
            }
        }
        return resultado;
    }

    /**
     * @brief Sobrecarga del operador * para la multiplicación de matrices.
     * @param otra Matriz a multiplicar.
     * @return Matriz resultante de la multiplicación.
     * @throw std::invalid_argument si las dimensiones son incompatibles.
     */
    Matriz<T> operator*(const Matriz<T>& otra) const {
        if (columnas != otra.filas) {
            throw std::invalid_argument("Dimensiones incompatibles para la multiplicación de matrices");
        }
        Matriz<T> resultado(filas, otra.columnas);
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < otra.columnas; ++j) {
                for (int k = 0; k < columnas; ++k) {
                    resultado.datos[i][j] += datos[i][k] * otra.datos[k][j];
                }
            }
        }
        return resultado;
    }

    /**
     * @brief Imprime la matriz en la consola.
     */
    void imprimir() const {
        for (int i = 0; i < filas; ++i) {
            for (int j = 0; j < columnas; ++j) {
                std::cout << datos[i][j] << " ";
            }
            std::cout << std::endl;
        }
    }

    /**
     * @brief Obtiene el número de filas de la matriz.
     * @return Número de filas.
     */
    int getFilas() const { return filas; }

    /**
     * @brief Obtiene el número de columnas de la matriz.
     * @return Número de columnas.
     */
    int getColumnas() const { return columnas; }

private:
    std::vector<std::vector<T>> datos;
    int filas, columnas;
};

#endif // MATRIZ_HPP
