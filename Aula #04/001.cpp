/* Escreva um programa que leia 
o nome do vendedor, 
o seu salário base mensal e 
o valor do total de vendas realizadas por ele durante o mês. 
Sabendo que 
este vendedor recebe comissão de 15% sobre o valor das vendas efetuadas por ele 
e que o seu salário final é a composição do
salário base mais o valor da comissão, 
calcule e mostre o nome do vendedor, 
seu salário final
e a porcentagem recebida a mais em relação ao seu salário base mensal. */

#include <iostream>
using namespace std;

int main()
{
// Declarando as variáveis
float salario_final, salario_base_mensal, valor_total_vendas, comissao;
string name;
// Recebendo os dados do usuário
cout << "Qual o nome do Vendedor?\n";
cin >> name;
cout << "Qual é o seu salário base mensal?\n";
cin >> salario_base_mensal;
cout << "Qual o valor do total de vendas realizadas por ele durante o mês?\n";
cin >> valor_total_vendas;

// Calculando a comissão e o salário final
comissao = 0.15 * valor_total_vendas;
salario_final = comissao + salario_base_mensal;

// Calculando a porcentagem da comissão em relação ao salário base
float porcentagem_a_mais = (comissao / salario_base_mensal) * 100;

// Exibindo os resultados para o usuário
cout << "O salário final será de R$" << salario_final << ",00." << endl;
cout << "O Sr." << name << " recebeu de comissão R$" << comissao << ",00, o que equivale a " << porcentagem_a_mais << "% a mais que o seu salário base.\n";

return 0;
}