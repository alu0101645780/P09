/* alu0101645780
  18/11/2024
  Escriviu una funció
    bool es_potencia_de_3(int n);

que retorni cert si i només si el natural n és una potència de 3. Per exemple, la funció hauria de retornar cert per a 1, 3, 9, 27, 81, etcètera, i retornar fals per a 0, 2, 4, 5, 6, 7, 8, 10, etcètera. */

#include <iostream>
#include <cmath>

using namespace std;

bool es_potencia_de_3(int n) {
  if (n <= 0) return false;
  while (n % 3 == 0) {
    n /= 3;
  }
  return n == 1;
}

int main() {
  int n;
  cout << "Introduce un número: ";
  cin >> n;

  if (es_potencia_de_3(n)) {
    cout << n << " es una potencia de 3." << endl;
  } else {
    cout << n << " no es una potencia de 3." << endl;
  }

  return 0;
}

