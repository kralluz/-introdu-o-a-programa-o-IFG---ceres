#include <iostream>
using namespace std;
//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
//salário, sabendo-se que este sofreu um aumento de 25%.
int main()
{
    float salario, ajuste;

    //Recebendo os dados
    cout << "Digite o seu salario.\n";
    cin >> salario;
    cout << "digite o percentual de ajuste em %.\n";
    cin >> ajuste;

    cout << "o salario após o aumento é  R$"<<((salario/100)*ajuste)+salario<<",00";

    return 0;
}