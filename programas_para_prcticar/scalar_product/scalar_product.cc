#include <iostream>
#include <vector>
using namespace std;

double ProductoEscalar(const vector<double>& vect1, const vector<double>& vect2) {
    if (vect1.size() != vect2.size()) {
        cerr << "ERROR: Los vectores deben tener la misma longitud" << endl;
        return 0;
    }

    double resultado = 0;
    for (int i = 0; i < vect1.size(); i++) {
        resultado += vect1[i] * vect2[i];
    }

    return resultado;
}

int main() {
    vector<double> vect1, vect2;
    double coef;

    cout << "Ingrese los elementos del primer vector (Presione Enter para finalizar): ";
    while (cin >> coef) {
        vect1.push_back(coef);
        if (cin.peek() == '\n') {
            break;
        }
    }

    cout << "Ingrese los elementos del segundo vector (Presione Enter para finalizar): ";
    while (cin >> coef) {
        vect2.push_back(coef);
        if (cin.peek() == '\n') {
            break;
        }
    }

    double resultado = ProductoEscalar(vect1, vect2);
    
    cout << "El producto escalar de los vectores es: " << resultado << endl;

    return 0;
}
