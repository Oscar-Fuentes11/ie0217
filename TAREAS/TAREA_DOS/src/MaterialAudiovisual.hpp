/**
 * @file MaterialAudiovisual.hpp
 * @brief Clase para manejar materiales audiovisuales.
 *
 * Esta clase hereda de Material y se utiliza para representar
 * materiales audiovisuales como películas, series, etc.
 *
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#ifndef MATERIALAUDIOVISUAL_HPP
#define MATERIALAUDIOVISUAL_HPP

#include "Material.hpp"
#include <string>

/**
 * @class MaterialAudiovisual
 * @brief Clase que representa un material audiovisual.
 *
 * Esta clase extiende la clase Material para añadir funcionalidades
 * específicas de materiales audiovisuales, como la duración.
 */
class MaterialAudiovisual : public Material {
protected:
    int duracion; ///< Duración del material en minutos.

public:
    /**
     * @brief Constructor para MaterialAudiovisual.
     * @param t Título del material.
     * @param a Autor o creador del material.
     * @param g Género del material.
     * @param e Editor o productor del material.
     * @param p Precio del material.
     * @param d Duración del material en minutos.
     */
    MaterialAudiovisual(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int d);
    
    /**
     * @brief Imprime la información del material.
     * Método sobreescrito para mostrar detalles específicos del material audiovisual.
     */
    void imprimirInfo() const override;
};

#endif // MATERIALAUDIOVISUAL_HPP
