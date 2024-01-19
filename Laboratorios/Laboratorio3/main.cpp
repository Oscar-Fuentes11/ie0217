#include "Agenda.hpp"
#include <iostream>

int main() {
    // Crear contactos
    Contacto<std::string> contacto1("Juanito Mora", "27681234", "dj.juanito@gmail.com");
    Contacto<std::string> contacto2("William Walker", "865488997", "willywalk@outlook.es");
    Contacto<std::string> contacto3("Juan Santamaria", "22315689", "adiosmezon@gmail.com");

    // Crear un objeto de la clase Agenda
    Agenda<std::string> agenda;

    // Agregar contactos a la agenda
    try {
        agenda.agregarContacto(contacto1);
        agenda.agregarContacto(contacto2);
        agenda.agregarContacto(contacto3);
    } catch (const std::exception& e) {
        std::cerr << "Error al agregar contacto: " << e.what() << std::endl;
    }

    // Mostrar contactos
    std::cout << "\nContactos en la agenda:" << std::endl;
    agenda.mostrarContactos();

    // Eliminar un contacto
    try {
        agenda.eliminarContacto("865488997");
    } catch (const std::exception& e) {
        std::cerr << "Error al eliminar contacto: " << e.what() << std::endl;
    }

    // Mostrar contactos después de eliminar
    std::cout << "\nContactos en la agenda después de eliminar:" << std::endl;
    agenda.mostrarContactos();

    // Buscar contactos
    std::cout << "\nResultados de la búsqueda por 'Juan':" << std::endl;
    auto resultados = agenda.buscarContactos("Juan");
    for (const auto& contacto : resultados) {
        std::cout << "Nombre: " << contacto.getNombre() << ", Teléfono: " << contacto.getTelefono() << ", Email: " << contacto.getEmail() << std::endl;
    }

    return 0;
}

