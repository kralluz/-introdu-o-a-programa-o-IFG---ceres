#include <iostream>
using namespace std;
//Faça um programa que receba o salário de um funcionário, calcule e mostre o novo
//salário, sabendo-se que este sofreu um aumento de 25%.
int main()
{
    float salario;

    //Recebendo os dados
    cout << "Digite o seu salario.\n";
    cin >> salario;

    cout << "o salario apos o aumento é  R$"<<((salario/100)*25)+salario<< endl;

    return 0;
}