#include <iostream>
using namespace std;

int main()
{
    float distancia, litros;

    //Recebendo os dados
    cout << "qual distância total percorrida em Km?\n";
    cin >> distancia;

    cout << "quantidade de combustível gasto em litros.\n";
    cin >> litros;

    //Exibindo as operações
    cout << "Consumo médio da viajem é de: " << distancia / litros << endl;

    return 0;
}
