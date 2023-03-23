#include <iostream>
using namespace std;

int main() {
    // Declaração das variáveis de entrada
    float comprimento_pista, num_voltas, num_abastecimentos, consumo_combustivel;
    // Declaração das variáveis de cálculo
    float distancia_total, distancia_entre_abastecimentos, consumo_por_volta, litros_minimos;

    // Leitura dos dados de entrada
    cout << "Digite o comprimento da pista em metros: ";
    cin >> comprimento_pista;
    cout << "Digite o número total de voltas a serem percorridas: ";
    cin >> num_voltas;
    cout << "Digite o número de abastecimentos desejados: ";
    cin >> num_abastecimentos;
    cout << "Digite o consumo de combustível do carro em Km/L: ";
    cin >> consumo_combustivel;

    // Cálculo das distâncias e do consumo por volta
    distancia_total = comprimento_pista * num_voltas; // Distância total percorrida
    distancia_entre_abastecimentos = distancia_total / num_abastecimentos; // Distância percorrida entre cada abastecimento
    consumo_por_volta = distancia_entre_abastecimentos / consumo_combustivel; // Consumo de combustível por volta

    // Cálculo do número mínimo de litros necessários
    litros_minimos = consumo_por_volta * num_voltas; // Litros mínimos necessários para percorrer todas as voltas até o primeiro abastecimento

    // Saída do resultado
    cout << "O número mínimo de litros necessários é: " << litros_minimos << endl;

    return 0;
}