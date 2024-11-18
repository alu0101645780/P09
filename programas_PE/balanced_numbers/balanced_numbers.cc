/* alu0101645780
  18/11/2024 
	In this exercise, we say that a natural number is balanced if the sum of the digits in even positions is equal to the sum of the digits in odd positions. For instance, 1463 and 48015 are balanced numbers.
Write a function that tells if a natural number n is balanced or not.*/

#include<iostream>
using namespace std;

bool is_balanced(int natural) {
  int suma_pares = 0, suma_impares = 0;
  int position = 1;

  while (natural != 0) {
    int digito = natural % 10;
    natural /= 10;

    if (position % 2 == 0) {
      suma_pares += digito;
    } else {
      suma_impares += digito;
    }

    position++;
  }

  return suma_pares == suma_impares;
}

int main() {
  int natural;
  cin >> natural;
  
  cout << is_balanced(natural) << endl;
  return 0;
}
