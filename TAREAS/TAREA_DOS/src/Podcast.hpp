/**
 * @file Podcast.hpp
 * @brief Definición de la clase Podcast.
 *
 * Este archivo contiene la definición de la clase Podcast, que es una subclase de MaterialAudiovisual.
 * Representa un podcast con atributos como el tema.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#ifndef PODCAST_HPP
#define PODCAST_HPP

#include "MaterialAudiovisual.hpp"
#include <string>

/**
 * @class Podcast
 * @brief Clase que representa un podcast.
 */
class Podcast : public MaterialAudiovisual {
private:
    std::string tema; ///< Tema del podcast.

public:
    /**
     * @brief Constructor de la clase Podcast.
     * @param t Título del podcast.
     * @param a Autor del podcast.
     * @param g Género del podcast.
     * @param e Editorial del podcast.
     * @param p Precio del podcast.
     * @param d Duración del podcast en minutos.
     * @param tema Tema del podcast.
     */
    Podcast(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int d, const std::string& tema);

    /**
     * @brief Método para imprimir la información del podcast.
     *
     * Imprime la información detallada del podcast, incluyendo título, autor, género, editorial, precio, duración y tema.
     */
    void imprimirInfo() const override;

    /**
     * @brief Método para clasificar la duración del podcast.
     * @return Una cadena que describe la duración del podcast, como "Corto", "Mediano" o "Largo".
     */
    std::string clasificarDuracion() const;
};

#endif // PODCAST_HPP
