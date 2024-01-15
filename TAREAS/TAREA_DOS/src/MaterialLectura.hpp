/**
 * @file MaterialLectura.hpp
 * @brief Clase para manejar información de materiales de lectura.
 *
 * Esta clase hereda de Material y se utiliza para representar
 * diferentes tipos de materiales de lectura, añadiendo atributos específicos
 * como la cantidad de hojas.
 * 
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#ifndef MATERIALLECTURA_HPP
#define MATERIALLECTURA_HPP

#include "Material.hpp"

/**
 * @class MaterialLectura
 * @brief Clase que representa un material de lectura.
 *
 * Extiende la clase Material para añadir características específicas
 * de materiales de lectura, como la cantidad de hojas.
 */
class MaterialLectura : public Material {
protected:
    int cantidadHojas; ///< Cantidad de hojas del material de lectura.

public:
    /**
     * @brief Constructor para MaterialLectura.
     * Inicializa un nuevo material de lectura con los valores dados.
     * 
     * @param t Título del material de lectura.
     * @param a Autor del material de lectura.
     * @param g Género del material de lectura.
     * @param e Estado del material de lectura.
     * @param p Precio del material de lectura.
     * @param ch Cantidad de hojas del material de lectura.
     */
    MaterialLectura(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int ch);

    /**
     * @brief Imprime información detallada del material de lectura.
     * Sobrescribe el método imprimirInfo de la clase base para incluir
     * información específica del material de lectura.
     */
    void imprimirInfo() const override;
};

#endif // MATERIALLECTURA_HPP
