/**
 * @file main.cpp
 * @brief Programa de gestión de materiales de lectura y audiovisuales.
 *
 * Este programa permite agregar, eliminar, buscar y mostrar materiales de lectura y audiovisuales.
 * Utiliza las clases Libro, Noticia, Pelicula y Podcast para representar diferentes tipos de materiales.
 * También utiliza las clases MaterialOrdenado y MaterialPrecio para gestionar y ordenar los materiales.
 *
 * @author Osar Fuentes
 * @date 12 de enero de 2024
 * @license Licencia de Dominio Público
 */

#include "Libro.hpp"
#include "Noticia.hpp"
#include "Pelicula.hpp"
#include "Podcast.hpp"
#include "MaterialOrdenado.hpp"
#include "MaterialPrecio.hpp"

#include <iostream>
#include <string>
#include <memory>
#include <limits> 

int main() {
    MaterialOrdenado biblioteca;
    MaterialPrecio catalogoPrecio;
    int opcion;

    do {
        std::cout << "Menú de Gestión de Materiales\n";
        std::cout << "1. Agregar Material\n";
        std::cout << "2. Eliminar Material\n";
        std::cout << "3. Buscar Material\n";
        std::cout << "4. Mostrar Todos los Materiales\n";
        std::cout << "5. Mostrar Materiales Ordenados por Precio\n";
        std::cout << "6. Salir\n";
        std::cout << "Seleccione una opción: ";
        std::cin >> opcion;

        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el '\n' restante en el buffer

        switch(opcion) {
            case 1: {
                // Lógica para agregar material
                std::string tipo, titulo, autor, genero, estado;
                double precio;
                std::cout << "Ingrese tipo de material (Libro/Noticia/Pelicula/Podcast): ";
                std::getline(std::cin, tipo);
                std::cout << "Titulo: ";
                std::getline(std::cin, titulo);
                std::cout << "Autor: ";
                std::getline(std::cin, autor);
                std::cout << "Genero: ";
                std::getline(std::cin, genero);
                std::cout << "Estado: ";
                std::getline(std::cin, estado);
                std::cout << "Precio: ";
                std::cin >> precio;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el '\n' restante en el buffer

                if (tipo == "Libro") {
                    int paginas;
                    std::string resumen, materialRelacionado;
                    std::cout << "Número de páginas: ";
                    std::cin >> paginas;
                    std::cin.ignore();
                    std::cout << "Resumen: ";
                    std::getline(std::cin, resumen);
                    std::cout << "Material Relacionado: ";
                    std::getline(std::cin, materialRelacionado);

                    Libro* libro = new Libro(titulo, autor, genero, estado, precio, paginas, resumen, materialRelacionado);
                    biblioteca.agregarMaterial(libro);
                    catalogoPrecio.agregarMaterial(libro);
                } else if (tipo == "Noticia") {
                    int paginas;
                    std::string resumen, materialRelacionado;
                    std::cout << "Número de páginas: ";
                    std::cin >> paginas;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el '\n' restante en el buffer
                    std::cout << "Resumen: ";
                    std::getline(std::cin, resumen);
                    std::cout << "Material Relacionado: ";
                    std::getline(std::cin, materialRelacionado);

                    Noticia* noticia = new Noticia(titulo, autor, genero, estado, precio, paginas, resumen, materialRelacionado);
                    biblioteca.agregarMaterial(noticia);
                    catalogoPrecio.agregarMaterial(noticia);
                } else if (tipo == "Pelicula") {
                     int duracion;
                     std::string resumen, materialRelacionado;
                     std::cout << "Duración (en minutos): ";
                     std::cin >> duracion;
                     std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el '\n' restante en el buffer
                     std::cout << "Resumen: ";
                     std::getline(std::cin, resumen);
                     std::cout << "Material Relacionado: ";
                     std::getline(std::cin, materialRelacionado);

                     Pelicula* pelicula = new Pelicula(titulo, autor, genero, estado, precio, duracion, resumen, materialRelacionado);
                     biblioteca.agregarMaterial(pelicula);
                     catalogoPrecio.agregarMaterial(pelicula);
                } else if (tipo == "Podcast") {
                    int duracion;
                    std::string tema;
                    std::cout << "Duración (en minutos): ";
                    std::cin >> duracion;
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el '\n' restante en el buffer
                    std::cout << "Tema: ";
                    std::getline(std::cin, tema);

                    Podcast* podcast = new Podcast(titulo, autor, genero, estado, precio, duracion, tema);
                    biblioteca.agregarMaterial(podcast);
                    catalogoPrecio.agregarMaterial(podcast);
                } else {
                    std::cout << "Tipo de material desconocido." << std::endl;
                }

                break;
            }
            case 2: {
                // Lógica para eliminar material
                std::string titulo;
                std::cout << "Ingrese el título del material a eliminar: ";
                std::getline(std::cin, titulo);
                biblioteca.eliminarMaterial(titulo);
                // Aquí también deberías eliminarlo de catalogoPrecio si es necesario
                break;
            }
            case 3: {
                // Lógica para buscar material
                std::string titulo;
                std::cout << "Ingrese el título del material a buscar: ";
                std::getline(std::cin, titulo);
                Material* material = biblioteca.buscarMaterial(titulo);
                if (material) {
                    material->imprimirInfo();
                } else {
                    std::cout << "Material no encontrado." << std::endl;
                }
                break;
            }
            case 4: {
                biblioteca.imprimirMateriales();
                break;
            }
            case 5: {
                bool ascendente;
                std::cout << "Orden Ascendente (1) o Descendente (0): ";
                std::cin >> ascendente;
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignora el '\n' restante en el buffer
                catalogoPrecio.imprimirOrdenado(ascendente);
                break;
            }
            case 6: {
                std::cout << "Saliendo del programa.\n";
                break;
            }
            default: {
                std::cout << "Opción no válida. Intente de nuevo.\n";
            }
        }
    } while (opcion != 6);

    return 0;
}
