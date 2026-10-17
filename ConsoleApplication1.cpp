#include <iostream>
using namespace std;

int main() {
    int edad;

    cout << "Ingrese la edad: ";
    cin >> edad;

    if (edad < 0 || edad > 120) {
        cout << "Edad invalida" << endl;
    }
    else if (edad < 12) {
        cout << "Edad: " << edad << "  ->  Tarifa: RD$100" << endl;
    }
    else if (edad < 60) {
        cout << "Edad: " << edad << "  ->  Tarifa: RD$250" << endl;
    }
    else {
        cout << "Edad: " << edad << "  ->  Tarifa: RD$150" << endl;
    }

    return 0;
}