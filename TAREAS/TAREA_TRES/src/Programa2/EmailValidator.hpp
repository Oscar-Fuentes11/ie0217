/**
 * @file EmailValidator.hpp
 * @brief Declaración de la clase EmailValidator para validar direcciones de correo electrónico.
 * @author Oscar Fuentes
 * @date 21-enero-2024
 * @license Publica General
 */

#ifndef EMAILVALIDATOR_HPP
#define EMAILVALIDATOR_HPP

#include <string>

/**
 * @class EmailValidator
 * @brief Clase para validar direcciones de correo electrónico.
 */
class EmailValidator {
public:
    /**
     * @brief Valida una dirección de correo electrónico.
     *
     * Esta función utiliza expresiones regulares para validar una dirección de correo electrónico.
     *
     * @param email La dirección de correo electrónico a validar.
     * @param mensajeError El mensaje de error se establece si la dirección es inválida.
     * @return true si la dirección de correo es válida, false si es inválida.
     */
    bool validarCorreo(const std::string& email, std::string& mensajeError);
};

#endif // EMAILVALIDATOR_HPP
