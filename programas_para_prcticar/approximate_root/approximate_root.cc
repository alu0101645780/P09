#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define EPSILON 0.00001

double AproximateRoot(const double& num) {
    double root{1.0}, delta{1.0};
    
    while (fabs(pow(root, 2) - num) > EPSILON) {
        if (delta > 0) {
            while (pow(root, 2) < num) {
                root += delta;
            }
        } else {
            while (pow(root, 2) > num) {
                root += delta;
            }
        }
        
        delta *= -0.5;
    }

    return root;
}

int main() {
    double number;
    cout << "Ingrese un número mayor que cero: ";
    cin >> number;

    if (number <= 0) {
        cerr << "El número debe ser mayor que cero." << endl;
        return 1;
    }

    cout << "La raíz cuadrada aproximada de " << number << " es: " << AproximateRoot(number) << endl;

    return 0;
}
