/**
 * @file main.cpp
 * @brief Programa principal para validar direcciones de correo electrónico utilizando EmailValidator.
 * @author Oscar Fuentes
 * @date 21-enero-2024
 * @license Publica General
 */

#include "EmailValidator.hpp"
#include <iostream>
#include <string>

/**
 * @brief Función principal del programa.
 * @return 0 si el programa se ejecuta correctamente.
 */
int main() {
    // Crear una instancia de EmailValidator
    EmailValidator validador;
    std::string email;
    std::string mensajeError;

    // Solicitar al usuario una dirección de correo electrónico para validar
    std::cout << "Introduce una dirección de correo electrónico para validar: ";
    std::cin >> email;

    // Validar la dirección de correo electrónico
    if (!validador.validarCorreo(email, mensajeError)) {
        // Si es inválida, mostrar un mensaje de error
        std::cout << "Dirección de correo inválida: " << mensajeError << std::endl;
    } else {
        // Si es válida, mostrar un mensaje de éxito
        std::cout << "La dirección de correo electrónico es válida." << std::endl;
    }

    return 0;
}
