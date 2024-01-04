#include <iostream>
using namespace std;

void test() {
    // var es una variable estática
    static int var = 0;
    ++var;
    
    cout << var << endl;
}

int main() {
    test();
    test();

    return 0;
}
