
//  Faça um programa que receba uma medida em pés, faça as
// conversões a seguir e mostre os resultados em:
// • polegadas;
// • jardas;
// • milhas.
// Considere para as conversões a seguinte tabela de referência:
// 1 pé = 12 polegadas
// 1 jarda = 3 pés
// 1 milha = 1760 jardas


#include<iostream>

using namespace std;

int main()
{
    float medida;
    cout<<"digite as medidas em pés";
    cin >> medida;
    float polegadas = medida * 12;
    float jardas = medida / 3;
    float milhas = jardas *1760;
    cout << "após a conversão, obtemos: " << endl;
    cout << jardas << " jardas"<< endl;
    cout << milhas << " milhas"<< endl;
    cout << polegadas << " polegadas"<< endl;
    return 0;
}
