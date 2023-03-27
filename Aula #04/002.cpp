/*  Faça um programa que
receba o número de horas trabalhadas e 
o valor do salário mínimo,
calcule e mostre o salário a receber por um funcionário seguindo estas regras:
- a hora trabalhada vale um quinto do salário mínimo;
- o salário bruto equivale ao número de horas trabalhadas multiplicado pelo valor da hora
- o imposto equivale a 3% do salário bruto;
- o salário a receber equivale ao salário bruto menos o imposto.
trabalhada; */
    #include <iostream>
    using namespace std;

    int main()
    {
        float horas_trabalhadas, valor_salario_minimo, salario_bruto, salario_final, imposto, valor_hora_trabalhadas;

        cout << "Quantas horas trabalhadas?\n";
        cin >> horas_trabalhadas;
        cout << "Qual o valor do Salário minimo?\n";
        cin >> valor_salario_minimo;

        valor_hora_trabalhadas = valor_salario_minimo / 5;
        salario_bruto = horas_trabalhadas*valor_hora_trabalhadas;
        imposto = salario_bruto*0.03;
        salario_final = salario_bruto-imposto;

        cout <<"O salário a receber por um funcionário é R$"<<salario_final<<endl;

        return 0;
    }   