#include <iostream>
using namespace std;

int main()
{
    // Este programa calcula o preço final de um produto com base no seu custo de mercado e na margem de lucro desejada pelo usuário.

    string nameproduct; // Armazena o nome do produto
    float custo, margem, precofinal; // Armazena o custo, a margem de lucro e o preço final do produto

    // Seção de entrada de dados - solicita ao usuário o nome e o custo do produto, e a margem de lucro desejada.
    cout << "Qual o nome do produto? Digite o nome completo do produto.\n";
    getline(cin, nameproduct); // Lê o nome do produto digitado pelo usuário e armazena na variável 'nameproduct'
    
    cout << "Digite o custo de mercado do produto em reais:\n";
    cin >> custo; // Lê o custo do produto digitado pelo usuário e armazena na variável 'custo'

    cout << "Digite a margem de lucro desejada sobre o produto em porcentagem:\n";
    cin >> margem; // Lê a margem de lucro digitada pelo usuário e armazena na variável 'margem'

    // Cálculo do preço final do produto
    precofinal = custo + (custo/100)*margem;

    // Exibição do resultado na tela
    cout << "O produto " << nameproduct << " tem um custo de mercado de R$" << custo << " e o preço final é de R$" << precofinal << endl;

    return 0;
    
}