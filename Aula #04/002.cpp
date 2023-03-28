/*  Faça um programa que
receba o número de horas trabalhadas e 
o valor do salário mínimo,
calcule e mostre o salário a receber por um funcionário seguindo estas regras:
- a hora trabalhada vale um quinto do salário mínimo;
- o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora
- o imposto equivale a 3% do salário bruto;
- o salário a receber equivale ao salário bruto menos o imposto.
trabalhada; */

#include <iostream> //Inclui a biblioteca iostream, que permite a entrada e saída de dados no console

using namespace std; //Define o namespace std, que é usado para evitar a necessidade de escrever std:: antes de cada função do C++ padrão

int main() //Função principal do programa
{
//Declaração de variáveis do tipo float para armazenar as horas trabalhadas, valor do salário mínimo, salário bruto, salário final, imposto e valor da hora trabalhada
float horas_trabalhadas, valor_salario_minimo, salario_bruto, salario_final, imposto, valor_hora_trabalhadas;


cout << "Quantas horas trabalhadas?\n"; //Solicita ao usuário que informe a quantidade de horas trabalhadas

cin >> horas_trabalhadas; //Recebe a quantidade de horas trabalhadas inserida pelo usuário

cout << "Qual o valor do Salário mínimo?\n"; //Solicita ao usuário que informe o valor do salário mínimo

cin >> valor_salario_minimo; //Recebe o valor do salário mínimo inserido pelo usuário


valor_hora_trabalhadas = valor_salario_minimo / 5; //Calcula o valor da hora trabalhada, que corresponde a 1/5 do valor do salário mínimo

salario_bruto = horas_trabalhadas * valor_hora_trabalhadas; //Calcula o salário bruto, que corresponde ao produto entre a quantidade de horas trabalhadas e o valor da hora trabalhada

imposto = salario_bruto * 0.03; //Calcula o imposto de 3% sobre o salário bruto

salario_final = salario_bruto - imposto;//Calcula o salário final, que corresponde ao salário bruto subtraído do imposto

cout << "O salário a receber por um funcionário é R$ " << salario_final << endl; //Exibe o valor do salário final na tela


return 0; //Retorna 0 para indicar que o programa foi executado com sucesso

}
