#include <iostream>
using namespace std;

int main()
{
    float not1, not2, not3, peso1, peso2, peso3;

    //Recebendo os dados
    cout << "São 3 provas onde cada uma tem seu peso\n";
    cout << "Digite respectivamente separando por espaços, a nota1, o peso da nota 1, a nota 2, o peso da nota 2 e a nota 3 e seu peso.\n";
    cin >> not1 >> peso1>> not2>>peso2>> not3>>peso3;

    cout << "A Média final do aluno é  "<<(not1*peso1+not2*peso2+not3*peso3)/(peso1+peso2+peso3)<<"%" << endl;

    return 0;
}