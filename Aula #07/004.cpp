#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    float altura, peso, continuar = 1;
    int classe =1;

    while (continuar == 1)
    {
        continuar = 0;
        peso = 0;
        altura = 0;

        
        cout << "a seguir informe os dados da pessoa" << endl;
        cout << "qual o peso?" << endl;
        cin >> peso;
        /*
        if (peso <= 60)
        {
            classe = 1;
        } */
        if (peso > 60  && peso <= 90)
        {
            classe = 2;
        }
        if (peso > 90)
        {
            classe = 3;
        }


        cout << "qual a altura" << endl;
        cin >> altura;
        if (altura > 1.2  && altura <= 1.7)
        {
            classe += 3;
        }
        if (altura > 1.7)
        {
            classe += 6;
        }

        switch (classe)
        {
        case 1:
            cout << "essa pessoa entra na categoria 'A' " << endl;
            break;
        case 4:
            cout << "essa pessoa entra na categoria 'B'" << endl;
            break;
        case 7:
            cout << "essa pessoa entra na categoria 'C'" << endl;
            break;
        case 2:
            cout << "essa pessoa entra na categoria 'D'" << endl;
            break;
        case 5:
            cout << "essa pessoa entra na categoria 'E'" << endl;
            break;
        case 8:
            cout << "essa pessoa entra na categoria 'F'" << endl;
            break;
        case 3:
            cout << "essa pessoa entra na categoria 'G'" << endl;
            break;
        case 6:
            cout << "essa pessoa entra na categoria 'H'" << endl;
            break;
        case 9:
            cout << "essa pessoa entra na categoria 'I'" << endl;
            break;
        }
        /*
        if ((peso > 90) && (altura < 1.20))
        {
            
        }
        if ((peso > 90) && (altura < 1.20))
        {
            
        }
        if ((peso > 90) && (altura < 1.20))
        {
            
        }
        if ((peso > 90) && (altura < 1.20))
        {
            
        }
        if ((peso > 90) && (altura < 1.20))
        {
            
        } */
        cout << "continuar a classificacao?" << endl;
        cout << "[1] Sim            [-] Nao" << endl;
        cin >> continuar;
        cout << endl;
    }
}