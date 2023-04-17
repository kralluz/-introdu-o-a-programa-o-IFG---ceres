#include <iostream>
using namespace std;

int main() {
  float fahrenheit, celsius;

  // Solicita a entrada da temperatura em graus Fahrenheit
  cout << "Digite a temperatura em graus Fahrenheit: ";
  cin >> fahrenheit;

  // Converte a temperatura para graus Celsius
  celsius = (fahrenheit - 32) * 5 / 9;

  // Exibe a temperatura em graus Celsius
  cout << "A temperatura em graus Celsius é: " << celsius << endl;

  return 0;
}
