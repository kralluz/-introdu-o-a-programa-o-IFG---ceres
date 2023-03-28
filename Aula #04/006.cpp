/* Construa um programa que calcule a quantidade de latas de tinta necessárias e o custo para pintar
tanques cilíndricos de combustível após o usuário informar a 
quantidade, a 
altura e o 
raio desses
cilindros, 
ambos em centímetros, 
sabendo que:
• a lata de tinta custa R$50,00;
• cada lata contém 5 litros;
• cada litro de tinta pinta 3 m²;
• a área do cilindro é dada pela soma das áreas da base superior e da inferior com a área lateral;
• a área de cada base é dada pela seguinte fórmula: Abase = π * R², onde R é o raio da circunferência da base e π é uma constante de valor conhecido aproximado de 3,14;
• a área da lateral é dada pela seguinte fórmula: A lateral = 2 * π * R * H, onde H é a altura do cilindro;
• cada m² equivale a 10.000 cm² pois: 1 m² = 1 m * 1 m, cada 1 m equivale a 100 cm, então 100 cm * 100 cm = 10.000 cm². */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
    float altura, raio, area, qtd_tinta, qtd_latas, custo;
    const float LITROS_POR_LATA = 5, PRECO_POR_LATA = 50;
    const float COBERTURA_POR_LITRO = 3, CM_POR_M = 100;

    // Entrada de dados
    cout << "Informe a altura do cilindro em cm: ";
    cin >> altura;
    cout << "Informe o raio do cilindro em cm: ";
    cin >> raio;

    // Cálculo da área
    area = 2 * M_PI * raio * altura + 2 * M_PI * pow(raio, 2);

    // Cálculo da quantidade de tinta necessária
    qtd_tinta = area / CM_POR_M / COBERTURA_POR_LITRO;

    // Cálculo da quantidade de latas necessárias
    qtd_latas = ceil(qtd_tinta / LITROS_POR_LATA);

    // Cálculo do custo
    custo = qtd_latas * PRECO_POR_LATA;

    // Saída de resultados
    cout << "Área do cilindro: " << area << " cm²" << endl;
    cout << "Quantidade de tinta necessária: " << qtd_tinta << " litros" << endl;
    cout << "Quantidade de latas necessárias: " << qtd_latas << endl;
    cout << "Custo total: R$ " << custo << endl;

    return 0;
}
