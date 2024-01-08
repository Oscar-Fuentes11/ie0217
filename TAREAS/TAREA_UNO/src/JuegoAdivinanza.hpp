#ifndef JUEGOADIVINANZA_HPP
#define JUEGOADIVINANZA_HPP

class JuegoAdivinanza {
public:
    void menuPrincipal();
    void jugarAdivinanza();
    void jugarModoDesafiante();
    void mostrarInstrucciones();
    
private:
    int generarNumeroAleatorio(int inicio, int fin);
};

#endif // JUEGOADIVINANZA_HPP
