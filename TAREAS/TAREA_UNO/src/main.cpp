/*
 * Archivo: main.cpp
 * Descripción: Programa principal que inicia el juego de adivinanzas.
 * Autor: Oscar Fuentes
 * Fecha de Creación: 6 de enero de 2024
 * Licencia: Licencia MIT (https://opensource.org/licenses/MIT)
 */
#include <iostream>
#include "JuegoAdivinanza.hpp"

/**
 * @brief Función principal que inicia el juego de adivinanzas.
 * @return 0 al finalizar el programa.
 */
int main() {
    // Crear una instancia del juego
    JuegoAdivinanza juego;
    // Iniciar el menú principal del juego
    juego.menuPrincipal();
    return 0;
}
