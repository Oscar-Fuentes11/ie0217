#include <iostream>
#include "student.hpp"
#include "calculator.hpp"

using namespace std;

int main() {
    Student student1(88.0), student2(56.0);

    Calculator::calculateAverage(student1, student2);

    return 0;
}
