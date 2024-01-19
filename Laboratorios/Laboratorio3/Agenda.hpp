#ifndef AGENDA_HPP
#define AGENDA_HPP

#include <iostream>
#include <list>
#include <algorithm>
#include <stdexcept>
#include "Contacto.hpp"

// Clase Agenda para manejar contactos telefónicos.
template <typename T>
class Agenda {
public:
    // Agrega un nuevo contacto a la agenda.
    void agregarContacto(const Contacto<T>& contacto);

    // Elimina un contacto de la agenda por su número de teléfono.
    void eliminarContacto(const T& telefono);

    // Muestra todos los contactos en la agenda.
    void mostrarContactos() const;

    // Busca contactos que coincidan con un patrón dado en su nombre o email.
    std::list<Contacto<T>> buscarContactos(const std::string& patron) const;

private:
    std::list<Contacto<T>> contactos;
};

#include "Agenda.cpp"
#endif //AGENDA_HPP