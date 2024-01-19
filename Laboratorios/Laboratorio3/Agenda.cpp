#include "Agenda.hpp"

template <typename T>
void Agenda<T>::agregarContacto(const Contacto<T>& contacto) {
    // Verificar si ya existe el contacto
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++) {
        if (it->getTelefono() == contacto.getTelefono()) {
            throw std::invalid_argument("Ya existe un contacto con este numero");
        }
    }
    // Agregamos contacto
    contactos.push_back(contacto);
}

template <typename T>
void Agenda<T>::eliminarContacto(const T& telefono) {
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); it++) {
        if (it->getTelefono() == telefono) {
            contactos.erase(it);
            return;
        }
    }
    throw std::invalid_argument("No se encuentra un contacto con ese numero");
}

template<typename T>
void Agenda<T>::mostrarContactos() const {
    typename std::list<Contacto<T>>::const_iterator it;
    for (it = contactos.begin(); it != contactos.end(); ++it) {
        std::cout << "Nombre: " << it->getNombre() << " "
                  << "Telefono: " << it->getTelefono() << " "
                  << "Email: " << it->getEmail() << std::endl;
    }
}

template <typename T>
std::list<Contacto<T>> Agenda<T>::buscarContactos(const std::string& patron) const {
    // Lista para almacenar los resultados de la búsqueda.
    std::list<Contacto<T>> resultados;

    // Aca esta la variable para almacenar la posición del patrón encontrado en las cadenas.
    std::string::size_type pos;

    // Aca es basicamente lo mismo, el iterador para recorrer la lista de contactos.
    typename std::list<Contacto<T>>::const_iterator it;

    // Recorrer todos los contactos en la agenda como en los demas.
    for (it = contactos.begin(); it != contactos.end(); ++it) {
        // Buscar el patrón en el nombre del contacto.
        pos = it->getNombre().find(patron);

        // Si el patrón se encuentra en el nombre, agregar el contacto a los resultados.
        if (pos != std::string::npos) {
            resultados.push_back(*it);
        } else {
            // Si no se encuentra en el nombre, buscar el patrón en el email del contacto.
            pos = it->getEmail().find(patron);

            // Si el patrón se encuentra en el email, agregar el contacto a los resultados.
            if (pos != std::string::npos) {
                resultados.push_back(*it);
            }
        }
    }

    // En esta parte se retorna la lista de contactos que coinciden con el patrón buscado.
    return resultados;
}



