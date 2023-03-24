
#include <iostream>
using namespace std;
int main()
{
    float temperatura;

    //Recebendo os dados
    cout << "Digite a temperatura em Célcius.\n";
    cin >> temperatura;
temperatura = (temperatura*9/5) + 32;
    cout <<"a temperatura em graus farenheit é: "<<temperatura;

    return 0;
}
