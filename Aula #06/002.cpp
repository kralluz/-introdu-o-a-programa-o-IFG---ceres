#include<iostream>

using namespace std;

int main()
{
    int numero;
    cout << "digite um número" << endl;
    cin >> numero;
    if (numero % 2 == 0) {
        cout << "o numero é par";
    } 
    else {
        cout << "o munero é ímpar";
    };
    return 0;
}
