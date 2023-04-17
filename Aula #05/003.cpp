
// 3. Sabe-se que o quilowatt de energia custa 0,1% do salário mínimo. Elabore um
// programa que receba o valor do salário mínimo e a quantidade de quilowatts
// consumida por uma residência, calcule e mostre:
//  • o valor de cada quilowatt;
//  • o valor a ser pago por essa residência;
//  • o valor a ser pago com desconto de 15%
#include<iostream>

using namespace std;

int main()
{
    float salario_minimo, quilowatts_consumidos;
    cout << "Qual o valor do salário mínimo";
    cin >> salario_minimo;
    cout << "Quanto de quilowatts foi consumida?";
    cin >> quilowatts_consumidos;
    
    float valor_quilowatts = 0.001 * salario_minimo;
    
    float valor_boleto = quilowatts_consumidos * valor_quilowatts;
    
    float desconto = valor_quilowatts * 0.15;
    
    cout << "O valor do boleto a ser pago pelo consumo de quilowatts é de: " << valor_boleto<<endl;
    
    cout << "Se houver 15 por cento de desconto o valor do boleto a ser pago pelo consumo de quilowatts é de: " << valor_boleto-desconto << endl;
    
    return 0;
}
