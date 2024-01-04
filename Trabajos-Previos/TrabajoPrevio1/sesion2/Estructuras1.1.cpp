#include <iostream>
using namespace std; // Corregir dos puntos por punto y coma

struct Person {
    char name[50];
    int age; // Corregir dos puntos por punto y coma
    float salary; // Corregir dos puntos por punto y coma
};

int main() {
    Person p1; // Corregir dos puntos por punto y coma

    cout << "Enter Full name: "; // Corregir dos puntos por punto y coma
    cin.get(p1.name, 50);

    cout << "Enter age: "; // Corregir dos puntos por punto y coma
    cin >> p1.age;

    cout << "Enter salary: "; // Corregir dos puntos por punto y coma
    cin >> p1.salary;

    cout << "\nDisplaying Information." << endl;
    cout << "Name: " << p1.name << endl;
    cout << "Age: " << p1.age << endl;
    cout << "Salary: " << p1.salary << endl; // Corregir dos puntos por punto y coma

    return 0;
}
