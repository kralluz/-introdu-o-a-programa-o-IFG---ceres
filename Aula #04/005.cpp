/* Um motorista de táxi deseja calcular o rendimento de seu carro. 
Escreva um programa que receba:
• o preço do litro do combustível;
• a marcação do odômetro (Km) no início do dia;
• a marcação do odômetro (Km) no final do dia;
• a média de consumo do veículo em Km / L;
• valor total (R$) recebido dos passageiros.
Calcule e escreva:
• o número de litros de combustível gasto;
 • lucro líquido (R$) do dia. */

#include <iostream> // Biblioteca de entrada e saída padrão

using namespace std;

int main() {        // Função principal
    float precolitro, marcacaoInicial, marcacaoFinal, mediaConsumo, valorTotal ;   // Declaração das variáveis a serem utilizadas

    cout << "Digite o preço do litro do combustível: R$";
    cin >> precolitro;
    cout << "Digite a marcação do odômetro (Km) no início do dia: ";
    cin >> marcacaoInicial;
    cout << "Digite a marcação do odômetro (Km) no final do dia: ";
    cin >> marcacaoFinal;
    cout << "Digite a média de consumo do veículo em Km / L: ";
    cin >> mediaConsumo;
    cout << "Digite o valor total (R$) recebido dos passageiros: R$";
    cin >> valorTotal;

    float distance = marcacaoFinal - marcacaoInicial;
    float consumo = distance / mediaConsumo;
    float custoCombustivel = consumo * precolitro;
    float lucroLiquido = valorTotal - custoCombustivel;

cout << "\nNúmero de litros de combustível gasto: " << consumo << " L\n";
cout << "Lucro líquido do dia: R$" << lucroLiquido << endl;

    return 0; // Retorna zero, indicando que o programa foi executado com sucesso
}