/**
 * @file EmailValidator.cpp
 * @brief Implementación de la clase EmailValidator para validar direcciones de correo electrónico.
 * @author Oscar Fuentes
 * @date 21-enero-2024
 * @license Publica General
 */

#include "EmailValidator.hpp"
#include <regex>
#include <stdexcept>

/**
 * @brief Valida una dirección de correo electrónico.
 *
 * Esta función utiliza expresiones regulares para validar una dirección de correo electrónico.
 *
 * @param email La dirección de correo electrónico a validar.
 * @param mensajeError El mensaje de error se establece si la dirección es inválida.
 * @return true si la dirección de correo es válida, false si es inválida.
 */
bool EmailValidator::validarCorreo(const std::string& email, std::string& mensajeError) {
    // Verificar si la dirección de correo contiene el símbolo '@'
    if (email.find('@') == std::string::npos) {
        mensajeError = "El correo debe contener '@'.";
        return false;
    }

    // Definir expresiones regulares para validar el nombre, dominio y extensión
    std::regex patronNombre(R"(^[a-zA-Z0-9]([a-zA-Z0-9.-]{0,13}[a-zA-Z0-9])?$)");
    std::regex patronDominio(R"(^[a-zA-Z]+(\.[a-zA-Z]+)+$)");
    std::regex patronExtension(R"(\.[a-zA-Z]{2,4}$)");

    // Dividir el correo en partes: nombre, dominio y extensión
    auto atPos = email.find('@');
    std::string nombre = email.substr(0, atPos);
    std::string dominioYExtension = email.substr(atPos + 1);

    // Validar el nombre del correo
    if (!std::regex_match(nombre, patronNombre)) {
        mensajeError = "El nombre del correo es inválido.";
        return false;
    }

    // Validar el dominio y la extensión del correo
    if (!std::regex_match(dominioYExtension, patronDominio) || !std::regex_search(dominioYExtension, patronExtension)) {
        mensajeError = "El dominio o la extensión del correo es inválido.";
        return false;
    }

    // Si todas las validaciones son exitosas, la dirección de correo es válida
    return true;
}
