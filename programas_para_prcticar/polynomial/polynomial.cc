#include<iostream>
#include<vector>
#include<cmath>
#include<cctype>
using namespace std;

double EvaluarPolinomio(const vector<double>& coeficientes, const double& valor) {
    double resultado = 0;
    for (int i = 0; i < coeficientes.size(); i++) {
        resultado += coeficientes[i] * pow(valor, i);
    }
    return resultado;
}

int main() {
    vector<double> coeficientes{};
    double valor;
    cout << "Ingrese los coeficientes del polinomio (presione Enter sin ingresar nada para terminar): " << endl;

    double coef;
    string input;
    
    while (true) {
        getline(cin, input);
        if (input.empty()) {
            break;
        }
        coef = stod(input);
        coeficientes.push_back(coef);
    }

    cout << "Ingrese el valor en el cual evaluar el polinomio: ";
    cin >> valor;

    cout << "El valor del polinomio es: " << EvaluarPolinomio(coeficientes, valor) << endl;

    return 0;
}