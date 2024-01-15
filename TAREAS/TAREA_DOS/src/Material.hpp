/**
 * @file Material.hpp
 * @brief Clase abstracta base para diferentes tipos de materiales.
 *
 * Esta clase abstracta define la estructura básica para diferentes tipos
 * de materiales, incluyendo atributos comunes y un método virtual puro para imprimir información.
 * Sirve como clase base para otras clases como MaterialAudiovisual y Pelicula.
 * 
 * @author Oscar Fuentes
 * @date 12 de enero de 2024
 * @license Dominio Público
 */

#ifndef MATERIAL_HPP
#define MATERIAL_HPP

#include <string>

/**
 * @class Material
 * @brief Clase abstracta base para materiales.
 *
 * Esta clase define atributos comunes como título, autor, género, estado y precio,
 * y declara un método virtual puro para imprimir información.
 */
class Material {
protected:
    std::string titulo; ///< Título del material.
    std::string autor;  ///< Autor del material.
    std::string genero; ///< Género del material.
    std::string estado; ///< Estado del material.
    double precio;      ///< Precio del material.

public:
    /**
     * @brief Constructor de Material.
     * Inicializa un nuevo objeto Material con los valores dados.
     * 
     * @param t Título del material.
     * @param a Autor del material.
     * @param g Género del material.
     * @param e Estado del material.
     * @param p Precio del material.
     */
    Material(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p);

    /**
     * @brief Destructor virtual por defecto.
     * Permite una correcta eliminación de objetos de clases derivadas.
     */
    virtual ~Material() = default;

    /**
     * @brief Método virtual puro para imprimir información del material.
     * Debe ser implementado por las clases derivadas.
     */
    virtual void imprimirInfo() const = 0;

    // Métodos accesores
    /**
     * @brief Obtiene el título del material.
     * @return Título del material.
     */
    const std::string& getTitulo() const { return titulo; }

    /**
     * @brief Obtiene el precio del material.
     * @return Precio del material.
     */
    double getPrecio() const { return precio; }
};

#endif // MATERIAL_HPP
