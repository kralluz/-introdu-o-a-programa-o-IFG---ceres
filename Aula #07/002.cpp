#include<iostream>
#include<cmath> 
using namespace std;

int main(){
    int peso, altura;
    cout <<"digite o peso, a altura em centímetros" << endl; 
    cin >> peso >> altura ;

    if (peso > 70 || peso < 80 && altura > 175 || altura < 190){

        if (altura <= 175 || altura >= 190){
        cout << "Recusado por altura"<< endl;

        }else if (peso <= 70 || peso >= 80){
            cout << "Recusado por peso"<< endl;

        }else {
            cout << "Aceito" << endl;
        }
        
    }else {
        cout << "Recusado por peso e altura" << endl;
    }
}