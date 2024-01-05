#include <iostream>
using namespace std;

#define BOOK_ID_MAX 10

enum casas_t {
    CASA_BADILLA,
    CASA_ALVARADO,
    CASA_SOLANO,
    CASA_MAX,
};

int main() {
    /* El valor de BOOK_ID_MAX es procesado. */
    cout << "El valor de Book ID Max es: " << BOOK_ID_MAX << endl;

    cout << "La cantidad de casas en el condiminio es: " << CASA_MAX << endl;

    return 0;
}
