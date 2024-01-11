#ifndef MOTO_COCHE_HPP
#define MOTO_COCHE_HPP

#include "Coche.hpp"
#include "Moto.hpp"

class MotoCoche : public Coche, public Moto {
public:
    MotoCoche(int velocidad, int numPuertas, bool tieneCasco);
};

#endif // MOTO_COCHE_HPP
