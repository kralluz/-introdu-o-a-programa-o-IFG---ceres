#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    float  a, b, c, aux;
    int i, continuar = 1;


    while (continuar == 1)
    {
        continuar = 0;


        cout << "digite algum valor" << endl;
        cin >> a;
        cout << "digite algum valor" << endl;
        cin >> b;
        cout << "digite algum valor" << endl;
        cin >> c;

        cout << "como organizar?" << endl;
        cout << "[1] Ordem crescente " << endl;
        cout << "[2] Ordem decrescente " << endl;
        cout << "[2] com o maior no meio " << endl;
        cin >> i;
        cout << endl;
        
        switch (i)
        {
        case 1:/*
            if (a > c)
            {
                aux = a;
                a = c;
                c = aux;
            } */
            

            
            if (a > b)
            {
                aux = a;
                a = b;
                b = aux;
            }
            if (b > c)
            {
                aux = b;
                b = c;
                c = aux;
            }
            if (a > b)
            {
                aux = a;
                a = b;
                b = aux;
            }
            cout << "Segue a nova sequencia: " << a << " - " << b << " - " << c << " - " << endl;
            break;
        case 2:
            if (a < b)
            {
                aux = a;
                a = b;
                b = aux;
            }
            if (b < c)
            {
                aux = b;
                b = c;
                c = aux;
            }
            if (a < b)
            {
                aux = a;
                a = b;
                b = aux;
            }
            cout << "Segue a nova sequencia: " << a << " - " << b << " - " << c << " - " << endl;
            break;
        case 3:
            if (a > b)
            {
                aux = a;
                a = b;
                b = aux;
            }
            if (c > b)
            {
                aux = c;
                c = b;
                b = aux;
            }
            
            cout << "Segue a nova sequencia: " << a << " - " << b << " - " << c << " - " << endl;
            break;
        }

        
        cout << "continuar ordenanento?" << endl;
        cout << "[1] Sim            [-] Nao" << endl;
        cin >> continuar;
        cout << endl;
    }
}