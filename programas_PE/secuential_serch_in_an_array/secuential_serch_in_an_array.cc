/* alu0101645780
   18/11/2024
   Write a function that tells if the integer number x is present in the vector of integer numbers v.

In order to compare the efficiency of your solution against the efficiency of the solution of the Judge, start searching for x from the lowest positions.*/

#include <iostream>
#include <vector>
#include <limits>
using namespace std;

bool exists(int x, const vector<int>& v) {
  for (int i = 0; i < v.size(); ++i) {
    if (v[i] == x) {
      return true;
    }
  }
  return false;
}

int main() {
  vector<int> v;
  int x;
  string input;

  cout << "Introduce los elementos del vector (pulsa Enter para finalizar):\n";
  
  while (true) {
    getline(cin, input);
    if (input.empty()) {
      break;
    }

    try {
      int num = stoi(input);
      v.push_back(num);
    } catch (const invalid_argument& e) {
      cout << "Entrada inválida. Introduce un número entero o pulsa Enter para finalizar.\n";
    }
  }

  cout << "Introduce el número a buscar: ";
  cin >> x;

  if (exists(x, v)) {
    cout << "El número " << x << " está presente en el vector.\n";
  } else {
    cout << "El número " << x << " no está presente en el vector.\n";
  }

  return 0;
}
