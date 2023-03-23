//Faça um programa que receba o preço de custo de um produto e a
//margem de lucro sobre o mesmo em porcentagem (%), 
//calcule e mostre o preço de venda já com o lucro incluído.



#include <iostream>
using namespace std;

int main()
{
    string nameproduct; // Declaração da variável name como uma string já que a string armazena vários caracteres
    float custo, margem, precofinal; // Declaração das variáveis do preço de custo, margem de lucro

    // Recebendo os dados (nome completo do usuário)
    cout << "Qual o seu nome do produto?\n";
    getline(cin, nameproduct); // Utiliza a função getline para ler o nome do usuário com espaços em branco

    cout << "Digite o custo de mercado do produto!\n";
    cin >> custo; // Lê as notas bimestrais do usuário
    
    cout << "Digite o a margem de lucro desejada sobre o produto em porcentagem!\n";
    cin >> margem; // Lê a margem de lucro

    // Cálculo de preço final de acordo com a margem de lucro.
    precofinal = custo + (custo/100)*margem;

    // Exibição das médias
    cout << "Olá, o " << nameproduct << " tem um custo de mercado de R$" << custo << "  e o preço final é de R$"<<precofinal << endl; // Exibe a média anual


    return 0;
}