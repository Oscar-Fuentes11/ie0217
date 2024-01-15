/**
 * @file Podcast.cpp
 * @brief Implementación de la clase Podcast.
 *
 * Este archivo contiene la implementación de los métodos de la clase Podcast, que es una subclase de MaterialAudiovisual.
 * Los métodos incluyen la impresión de información y la clasificación de la duración del podcast.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#include "Podcast.hpp"
#include <iostream>

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
Podcast::Podcast(const std::string& t, const std::string& a, const std::string& g, const std::string& e, double p, int d, const std::string& tema)
    : MaterialAudiovisual(t, a, g, e, p, d), tema(tema) {}

/**
 * @brief Método para imprimir la información del podcast.
 *
 * Imprime la información detallada del podcast, incluyendo título, autor, género, editorial, precio, duración y tema.
 */
void Podcast::imprimirInfo() const {
    MaterialAudiovisual::imprimirInfo();
    std::cout << "Tema: " << tema << std::endl;
}

/**
 * @brief Método para clasificar la duración del podcast.
 * @return Una cadena que describe la duración del podcast, como "Corto", "Mediano" o "Largo".
 */
std::string Podcast::clasificarDuracion() const {
    if (duracion <= 30) return "Corto";
    if (duracion <= 90) return "Mediano";
    return "Largo";
}
