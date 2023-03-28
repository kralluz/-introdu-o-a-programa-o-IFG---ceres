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

    float altura, raio, latas_tinta, custo_total;
    // Declaração das variáveis
    float ;

    // Solicita ao usuário a altura e o raio do cilindro em centímetros
    cout << "Informe a altura do cilindro em centimetros: ";
    cin >> altura;
    cout << "Informe o raio do cilindro em centimetros: ";
    cin >> raio;


    // Exibe o resultado na tela
    cout << "Para pintar o cilindro serão necessárias " << latas_tinta << " latas de tinta, com um custo total de R$" << custo_total << endl;

    return 0;
    }