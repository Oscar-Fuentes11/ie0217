#include <iostream>
using namespace std;

int main() {
    double numerator, denominator, arr[4] = {0.0, 0.0, 0.0, 0.0};
    int index;

    cout << "Enter array index: ";
    cin >> index;

    try {
        // Throw an exception if array index is out of bounds
        if (index < 0 || index >= 4) {  
            throw "Error: Array index out of bounds!";
        }

        cout << "Enter numerator: ";
        cin >> numerator;

        cout << "Enter denominator: ";
        cin >> denominator;

        // Throw an exception if denominator is 0 to avoid division by zero
        if (denominator == 0) {
            throw 0;
        }

        // Calculate and display the division result if denominator is not 0
        arr[index] = numerator / denominator;
        cout << "Result: " << arr[index] << endl;
    }
    catch (const char* msg) {
        // Catch an exception for array index out of bounds
        cout << msg << endl;
    }
    catch (int num) {
        // Catch an exception for division by zero
        cout << "Error: Cannot divide by " << num << endl;
    }
    catch (...) {
        // Catch any other unexpected exception
        cout << "An unexpected exception occurred!" << endl;
    }

    return 0;
}
