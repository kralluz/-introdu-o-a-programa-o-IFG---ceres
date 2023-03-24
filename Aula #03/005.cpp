#include <iostream>
using namespace std;

int main() {
    float racao, cachorro01, cachorro02;
    cout << "Qual o peso do Saco de Ração";
    cin >> racao;
    racao = racao*1000; //convertendo para gramas
    cout << "quanto de ração cada cachorro vai receber por dia?";
    cout << "digite o valor em gramas cada um separado por espaços";
    cin >> cachorro01 >> cachorro02;
    
    racao = racao - ((cachorro01+cachorro02)*5);
    racao = racao/1000; //convertendo para Kilos
    
    cout <<"após 5 dias restará "<<racao<<"kg de ração"<<endl;

    return 0;
}
