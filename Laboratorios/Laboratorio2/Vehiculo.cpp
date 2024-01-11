#include "Vehiculo.hpp"
#include <iostream> 

Vehiculo::Vehiculo(int param_velocidad){
    this->velocidad = param_velocidad;
}

void Vehiculo::acelerar(){
    cout << "Acelerando el vehiculo hasta" << velocidad << "Km/h"<< endl;
}

void Vehiculo::frenar (){
    cout << "Frenando el vehiculo" <<endl;
}