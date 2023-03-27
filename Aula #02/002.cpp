#include <iostream>
using namespace std;

int main()
{
    char produto;
    float valor;

    //Recebendo os dados
    cout << "qual o nome do produto?\n";
    cin >> produto;

    cout << "qual o valor do produto\n";
    cin >> valor;

    //Exibindo as operações

    cout << "o valor da parcela dividida em 5 vezes é de R$" << valor / 5 << endl;
}