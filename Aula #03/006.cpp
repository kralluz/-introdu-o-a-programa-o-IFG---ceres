/* 6. O custo ao consumidor de um carro novo é 
a soma do custo de fábrica com a porcentagem do distribuidor e dos impostos 
(aplicados, primeiro os impostos sobre o custo de fábrica, e depois a porcentagem do distribuidor sobre o resultado).
Supondo que a porcentagem do distribuidor seja de 28% e os impostos 45%.
Escreva um programa que 
leia o custo de fábrica de um carro e 
informe o custo final do mesmo ao consumidor. */

#include <iostream>
using namespace std;

int main()
{
    float custo_fabrica, porcentagem_distribuidor, impostos, custo_final; /* definição das variáveis necessárias */

    cout << "Qual é o custo de fábrica do carro?\n";/* informando qual valor será recebido */
    cin >> custo_fabrica;/* recebendo o valor de custo de fábrica */

    impostos = custo_fabrica*0.45;/* definindo o valor dos impostos */
    porcentagem_distribuidor = 0.28;/* definindo os valores de % que o distribuidor receberá */

    custo_final = custo_fabrica + impostos + (custo_fabrica + impostos)*porcentagem_distribuidor;/* formula do custo final */

    cout << "O custo final será de R$"<< custo_final << ",00" << endl;

    return 0;
}