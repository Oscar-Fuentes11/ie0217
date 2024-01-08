/*
 * Archivo: JuegoAdivinanza.hpp
 * Descripción: Clase que implementa un juego interactivo de adivinanzas.
 * Autor: Oscar Fuentes
 * Fecha de Creación: 6 de enero de 2024
 * Licencia: Licencia MIT (https://opensource.org/licenses/MIT)
 */

#include <iostream>
#include <cstdlib>
#include <ctime>
#include "JuegoAdivinanza.hpp"

/**
     * @brief Muestra el menú principal del juego y gestiona las opciones del usuario.
     */
void JuegoAdivinanza::menuPrincipal() {
    
    int opcion;
    do {
        std::cout << "----- Menú Principal -----" << std::endl;
        std::cout << "1. Jugar Adivinanza" << std::endl;
        std::cout << "2. Jugar Modo Desafiante" << std::endl;
        std::cout << "3. Instrucciones" << std::endl;
        std::cout << "4. Salir" << std::endl;
        std::cout << "Ingrese su opción: ";
        std::cin >> opcion;

        switch (opcion) {
            case 1:
                jugarAdivinanza();
                break;
            case 2:
                jugarModoDesafiante();
                break;
            case 3:
                mostrarInstrucciones();
                break;
            case 4:
                std::cout << "¡Gracias por jugar!" << std::endl;
                break;
            default:
                std::cout << "Opción no válida. Intente de nuevo." << std::endl;
        }
    } while (opcion != 4);
}

 /**
     * @brief Inicia el juego estándar donde el usuario intenta adivinar un número secreto.
     */
void JuegoAdivinanza::jugarAdivinanza() {
    std::cout << "¡Bienvenido al modo de juego estándar!" << std::endl;

    int inicio, fin;
    std::cout << "Ingrese el rango de valores (inicio fin): ";
    std::cin >> inicio >> fin;

    int numeroSecreto = generarNumeroAleatorio(inicio, fin);
    int intentosMaximos = (fin - inicio + 1) / 3;
    int intentosRealizados = 0;
    int intentoUsuario;

    std::cout << "Adivina el número secreto entre " << inicio << " y " << fin << std::endl;

    while (intentosRealizados < intentosMaximos) {
        std::cout << "Intento " << intentosRealizados + 1 << ": ";
        std::cin >> intentoUsuario;

        if (intentoUsuario == numeroSecreto) {
            std::cout << "¡Felicidades! ¡Has adivinado el número secreto!" << std::endl;
            return;
        } else {
            std::cout << "Incorrecto. ";
            if (intentoUsuario < numeroSecreto) {
                std::cout << "El número secreto es mayor." << std::endl;
            } else {
                std::cout << "El número secreto es menor." << std::endl;
            }
        }

        intentosRealizados++;
    }

    std::cout << "Lo siento, has agotado tus intentos. El número secreto era: " << numeroSecreto << std::endl;
}

 /**
     * @brief Inicia el modo desafiante donde el usuario recibe pistas abstractas al intentar adivinar el número secreto.
     */
void JuegoAdivinanza::jugarModoDesafiante() {
    std::cout << "¡Bienvenido al modo de juego desafiante!" << std::endl;

    int inicio, fin;
    std::cout << "Ingrese el rango de valores (inicio fin): ";
    std::cin >> inicio >> fin;

    int numeroSecreto = generarNumeroAleatorio(inicio, fin);
    int intentosMaximos = (fin - inicio + 1) / 3;
    int intentosRealizados = 0;
    int intentoUsuario;

    std::cout << "Adivina el número secreto entre " << inicio << " y " << fin << std::endl;

    while (intentosRealizados < intentosMaximos) {
        std::cout << "Intento " << intentosRealizados + 1 << ": ";
        std::cin >> intentoUsuario;

        if (intentoUsuario == numeroSecreto) {
            std::cout << "¡Felicidades! ¡Has adivinado el número secreto!" << std::endl;
            return;
        } else {
            std::cout << "Pistas: ";
            if (abs(intentoUsuario - numeroSecreto) <= 5) {
                std::cout << "¡Hirviendo!" << std::endl;
            } else if (abs(intentoUsuario - numeroSecreto) <= 10) {
                std::cout << "¡Caliente!" << std::endl;
            } else if (abs(intentoUsuario - numeroSecreto) <= 20) {
                std::cout << "¡Frío!" << std::endl;
            } else {
                std::cout << "¡Congelado!" << std::endl;
            }
        }

        intentosRealizados++;
    }

    std::cout << "Lo siento, has agotado tus intentos. El número secreto era: " << numeroSecreto << std::endl;
}

 /**
     * @brief Muestra las instrucciones del juego.
     */
void JuegoAdivinanza::mostrarInstrucciones() {
    std::cout << "Instrucciones del juego:" << std::endl;
    std::cout << "1. Elige el rango de valores para el número secreto." << std::endl;
    std::cout << "2. Intenta adivinar el número secreto dentro del límite de intentos." << std::endl;
    std::cout << "3. En el modo desafiante, recibirás pistas como 'Congelado', 'Frío', 'Caliente' y 'Hirviendo'." << std::endl;
    std::cout << "4. ¡Diviértete y buena suerte!" << std::endl;
}

/**
     * @brief Genera y devuelve un número aleatorio dentro del intervalo [inicio, fin].
     * @param inicio El valor mínimo del intervalo.
     * @param fin El valor máximo del intervalo.
     * @return Un número aleatorio dentro del intervalo.
     */
int JuegoAdivinanza::generarNumeroAleatorio(int inicio, int fin) {
    std::srand(std::time(0));
    return std::rand() % (fin - inicio + 1) + inicio;
}
