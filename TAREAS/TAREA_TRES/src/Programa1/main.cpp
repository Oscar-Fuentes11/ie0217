/**
 * @file main.cpp
 * @brief Programa principal que realiza operaciones con matrices y números complejos.
 * @author Oscar Fuentes
 * @date 21-enero-2024
 * @license Publica General
 */

#include "Matriz.hpp"
#include "OperacionesBasicas.hpp"
#include "OperacionCompleja.hpp"
#include <iostream>
#include <complex>

int main() {
    int filas, columnas;

    // Solicitar al usuario las dimensiones de la matriz A
    std::cout << "Introduce las dimensiones de la matriz A (filas y columnas): ";
    std::cin >> filas >> columnas;
    Matriz<int> matrizA(filas, columnas);

    std::cout << "Introduce los elementos de la matriz A:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> matrizA[i][j];
        }
    }

    // Repetir el proceso para la matriz B
    std::cout << "Introduce las dimensiones de la matriz B (filas y columnas): ";
    std::cin >> filas >> columnas;
    Matriz<int> matrizB(filas, columnas);

    std::cout << "Introduce los elementos de la matriz B:" << std::endl;
    for (int i = 0; i < filas; ++i) {
        for (int j = 0; j < columnas; ++j) {
            std::cout << "Elemento [" << i << "][" << j << "]: ";
            std::cin >> matrizB[i][j];
        }
    }

    int opcion;
    do {
        std::cout << "\nMenú de Operaciones con Matrices:\n";
        std::cout << "1. Sumar Matrices\n";
        std::cout << "2. Restar Matrices\n";
        std::cout << "3. Multiplicar Matrices\n";
        std::cout << "4. Operaciones con Números Complejos\n";
        std::cout << "5. Salir\n";
        std::cout << "Elige una opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1: {
                // Suma de matrices
                try {
                    Matriz<int> resultado = matrizA + matrizB;
                    resultado.imprimir();
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << '\n';
                }
                break;
            }
            case 2: {
                // Resta de matrices
                try {
                    Matriz<int> resultado = matrizA - matrizB;
                    resultado.imprimir();
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << '\n';
                }
                break;
            }
            case 3: {
                // Multiplicación de matrices
                try {
                    Matriz<int> resultado = matrizA * matrizB;
                    resultado.imprimir();
                } catch (const std::invalid_argument& e) {
                    std::cerr << "Error: " << e.what() << '\n';
                }
                break;
            }
            case 4: {
                // Operaciones con números complejos
                int f, c;
                std::cout << "Introduce las dimensiones de la matriz de números complejos (filas y columnas): ";
                std::cin >> f >> c;

                Matriz<std::complex<double>> matrizComplejaA(f, c);
                Matriz<std::complex<double>> matrizComplejaB(f, c);

                std::complex<double> valorComplejo;
                for (int i = 0; i < f; ++i) {
                    for (int j = 0; j < c; ++j) {
                        std::cout << "Introduce el elemento [" << i << "][" << j << "] para la matriz A (parte real e imaginaria): ";
                        std::cin >> valorComplejo;
                        matrizComplejaA[i][j] = valorComplejo;

                        std::cout << "Introduce el elemento [" << i << "][" << j << "] para la matriz B (parte real e imaginaria): ";
                        std::cin >> valorComplejo;
                        matrizComplejaB[i][j] = valorComplejo;
                    }
                }

                // Realizar operaciones con matrices de números complejos
                Matriz<std::complex<double>> resultadoSuma = matrizComplejaA + matrizComplejaB;
                Matriz<std::complex<double>> resultadoResta = matrizComplejaA - matrizComplejaB;
                Matriz<std::complex<double>> resultadoMultiplicacion = matrizComplejaA * matrizComplejaB;

                // Imprimir los resultados
                std::cout << "Resultado de la suma de matrices complejas:" << std::endl;
                resultadoSuma.imprimir();

                std::cout << "Resultado de la resta de matrices complejas:" << std::endl;
                resultadoResta.imprimir();

                std::cout << "Resultado de la multiplicación de matrices complejas:" << std::endl;
                resultadoMultiplicacion.imprimir();
                break;
            }
            case 5:
                std::cout << "Saliendo del programa...\n";
                break;
            default:
                std::cout << "Opción no válida. Inténtalo de nuevo.\n";
        }

    } while (opcion != 5);

    return 0;
}
