#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    float maca, morango, preco, continuar = 1;

    while (continuar == 1)
    {
        maca = 0;
        morango = 0;
        preco = 0;
        continuar = 0;

        cout << "deu quantos kilos de maca?" << endl;
        cin >> maca;
        if (maca > 5)
        {
        preco += maca*4;
        }
        else {
        preco += maca*5;
        }
        cout << "e de morango?" << endl;
        cin >> morango;
        if (morango > 5)
        {
        preco += morango*3;
        }
        else {
        preco += morango*2;
        }
        cout << "no total fica " << preco << " reais";
        if ((preco > 35) || ((maca+morango) > 8))
        {
            preco = preco*0.8;
            cout << ", mas nesse tanto da pra te fazer um desconto.";
            cout << "fica por " << preco << " reais";
        }
        cout << "continuar comprando?" << endl;
        cout << "[1]Sim   [-]Nao" << endl;
        cin >> continuar;
        cout << endl;
    }

}