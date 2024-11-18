#include<iostream>
#include<cmath>
#include<iomanip>
using namespace std;

#define EPSILON 0.00001

double AproximateRoot(const double& num) {
    double root{1.0}, delta{0.1};
    
    while (fabs(pow(root, 2) - num) > EPSILON) {
        if (pow(root, 2) < num) {
            root += delta;
        } else {
            root -= delta;
        }
        delta *= 0.5;
    }

    return root;
}

double CalculateHypotenuse(double cateto1, double cateto2) {
    double sum_of_squares = pow(cateto1, 2) + pow(cateto2, 2);
    return AproximateRoot(sum_of_squares);
}

int main() {
    double cateto1, cateto2;

    cout << "Ingrese el primer cateto: ";
    cin >> cateto1;

    if (cin.fail()) {
        cerr << "Error en la entrada del primer cateto. Debe ser un número real." << endl;
        return 1;
    }

    cout << "Ingrese el segundo cateto: ";
    cin >> cateto2;

    if (cin.fail()) {
        cerr << "Error en la entrada del segundo cateto. Debe ser un número real." << endl;
        return 1;
    }

    double hipotenusa = CalculateHypotenuse(cateto1, cateto2);

    cout << fixed << setprecision(4);
    cout << "La hipotenusa del triángulo es: " << hipotenusa << endl;

    return 0;
}
