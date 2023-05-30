#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    float  salario;
    int  a, continuar = 1;


    while (continuar == 1)
    {
        continuar = 0;



        cout << "Digite a opção desejada:" << endl;
        cout << "[1] Imposto a ser pago e salário final" << endl;
        cout << "[2] Novo salário com aumento" << endl;
        cout << "[3] Classificação" << endl;
        cin >> a;
        cout << " informe seu salario atual" << endl;
        switch (a)
        {
        case 1:
            cout << "  - --Imposto a ser pago e salario final-- -" << endl;
            cout << endl;
            if (salario < 1100)
            {
                cout << "saldo contribuinte: " << salario*0.05 << endl;
                cout << "salario final: " << salario*0.95 << endl;
            }
            if ((salario >= 1100)   && (salario <= 3000))
            {
                cout << "saldo contribuinte: " << salario*0.1 << endl;
                cout << "salario final: " << salario*0.9 << endl;
            }
            if (salario > 3000)
            {
                cout << "saldo contribuinte: " << salario*0.15 << endl;
                cout << "salario final: " << salario*0.85 << endl;
            }
            break;

        case 2:
            cout << "  - --Novo salario com aumento-- -" << endl;
            cout << endl;
            if (salario > 3000)
            {
                salario += 450;
            }
            if ((salario <= 3000) && (salario >= 2000))
            {
                salario += 300;
            }
            if ((salario < 2000) && (salario >= 1500))
            {
                salario += 250;
            }
            if (salario < 1500)
            {
                salario += 100;
            }
                cout << "salario reajustado: " << salario << endl;
            break;

        case 3:
            cout << "  - --Classificacao salarial-- -" << endl;
            cout << endl;
            if (salario < 1500)
            {
                cout << "classiificacao: bem remunerado " << salario*0 << endl;
            }
            else
            {
                cout << "classiificacao: mal remunerado " << salario*0 << endl;
            }
            break;
        }


        cout << "continuar a ?" << endl;
        cout << "[1] Sim            [-] Nao" << endl;
        cin >> continuar;
        cout << endl;
    }
}