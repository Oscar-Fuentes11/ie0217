#include <iostream>

// función que toma un valor como parámetro
void func1(int numVal) {
    // código
}

// función que toma una referencia como parámetro
// nota el & antes del parámetro
void func2(int &numRef) {
    // código
}

int main() {
    int num = 5;

    // pasar por valor
    func1(num);

    // pasar por referencia
    func2(num);

    return 0;
}
