#include <iostream>

using namespace std;

// declaring a function
int add(int a, int b) {
    return (a + b);  // Corregir el operador de asignación ":" por el operador ">>"
}

int main() {
    int sum;

    // calling the function and storing
    // the returned value in sum
    sum = add(100, 78);

    cout << "100 + 78 = " << sum << endl;  
    
    return 0;
}
