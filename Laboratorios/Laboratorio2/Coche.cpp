#include "Coche.hpp"

Coche::Coche(int velocidad,int numPuertas) : Vehiculo(velocidad), numPuertas(numPuertas){}

void Coche::abrirPuertas(){
    /*Codigo para activar sensores que abren puertas*/
   std:: cout << "Abriendo las" << numPuertas << "puertas del coche" << endl;
}