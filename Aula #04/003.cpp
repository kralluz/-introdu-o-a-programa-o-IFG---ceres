/*Um trabalhador recebeu seu salário e o depositou em sua conta bancária.
Esse trabalhador emitiu dois cheques 
e agora deseja saber seu saldo atual.
Sabe-se que cada operação bancária de retirada 
está sujeita à tarifação de 0,38% e o saldo inicial da conta está zerado.
Elabore um programa que apresente os lançamentos, 
o total de impostos descontados e o saldo atual */    

#include <iostream> //Inclui a biblioteca iostream, que permite a entrada e saída de dados no console
using namespace std;//Define o namespace std, que é usado para evitar a necessidade de escrever std:: antes de cada função do C++ padrão


int main() //Função principal do programa
{

float saldo_inicial, valor_cheque_1, valor_cheque_2, total_impostos, saldo_atual; //Declaração de variáveis do tipo float para armazenar os valores iniciais e finais dos saldos, valores dos cheques e impostos


cout << "Informe o valor do primeiro cheque: R$ ";// Solicita ao usuário que informe o valor do primeiro cheque

cin >> valor_cheque_1;//Recebe o valor do primeiro cheque inserido pelo usuário


cout << "Informe o valor do segundo cheque: R$ ";// Solicita ao usuário que informe o valor do segundo cheque

cin >> valor_cheque_2; //Recebe o valor do segundo cheque inserido pelo usuário


total_impostos = (valor_cheque_1+valor_cheque_2)*0.0038; //Calcula o total de impostos a serem descontados dos cheques, que corresponde a 0,38% do valor total dos cheques

saldo_atual = saldo_inicial - valor_cheque_1 - valor_cheque_2 - total_impostos;//Calcula o saldo atual subtraindo o valor dos cheques e o total de impostos do saldo inicial (que não foi declarado no código, mas será considerado como 0 neste caso)

 //Exibe os lançamentos (valores dos cheques), o total de impostos descontados e o saldo atual na tela
cout << "Lançamentos:" << endl;
cout << "Cheque 1: R$ " << valor_cheque_1 << endl;
cout << "Cheque 2: R$ " << valor_cheque_2 << endl;
cout << "Total de impostos descontados: R$ " << total_impostos << endl;
cout << "Saldo atual: R$ " << saldo_atual << endl;


return 0;//Retorna 0 para indicar que o programa foi executado com sucesso
}