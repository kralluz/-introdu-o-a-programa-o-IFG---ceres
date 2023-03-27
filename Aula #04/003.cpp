/*Um trabalhador recebeu seu salário e o depositou em sua conta bancária.
Esse trabalhador emitiu dois cheques 
e agora deseja saber seu saldo atual.
Sabe-se que cada operação bancária de retirada 
está sujeita à tarifação de 0,38% e o saldo inicial da conta está zerado.
Elabore um programa que apresente os lançamentos, 
o total de impostos descontados e o saldo atual */    
#include <iostream>
    using namespace std;

    int main()
    {
    float saldo_inicial, valor_cheque_1, valor_cheque_2, total_impostos, saldo_atual;

    // Solicitando o valor do primeiro cheque
    cout << "Informe o valor do primeiro cheque: R$ ";
    cin >> valor_cheque_1;

    // Solicitando o valor do segundo cheque
    cout << "Informe o valor do segundo cheque: R$ ";
    cin >> valor_cheque_2;

    total_impostos  = (valor_cheque_1+valor_cheque_2)*0.0038;   
    saldo_atual = saldo_inicial - valor_cheque_1 - valor_cheque_2 - total_impostos;

    // Exibindo os lançamentos, o total de impostos descontados e o saldo atual
    cout << "Lançamentos:" << endl;
    cout << "Cheque 1: R$ " << valor_cheque_1 << endl;
    cout << "Cheque 2: R$ " << valor_cheque_2 << endl;
    cout << "Total de impostos descontados: R$ " << total_impostos << endl;
    cout << "Saldo atual: R$ " << saldo_atual << endl;

        return 0;
    }   