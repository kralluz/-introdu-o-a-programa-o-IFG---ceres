#include<iostream>
#include<cmath> 
using namespace std;


// Construa um programa em C++ que calcule o valor dos dez primeiros termos da série H, em que:
// H = (1 / 1)³ - (1 / 3)³ + (1 / 5)³ - (1 / 7)³ + (1 / 9)³


int main() {

float denominador = 1 ;    
float numerador = 1;
int pairOrEven = 1;
float H;
// primeira operação 
float PrimeiraOP;
// operação seguinte
float SegundaOP;


    for (int contador = 1; contador < 11; contador++){
        
        //ímpar ou par 
        if(pairOrEven % 2 == 0 ) { // SE FOR PAR
            cout << denominador << endl;
            PrimeiraOP = numerador / denominador; 
            denominador = (denominador + 2);
            denominador = denominador * denominador * denominador;
            SegundaOP = numerador / denominador;
            H = PrimeiraOP - SegundaOP;
            cout <<"na " << contador <<  "° vez, H vale:" << H << endl;



        }else { // SE FOR ÍMPAR
            cout << denominador << endl;
            PrimeiraOP = numerador / denominador; 
            denominador = (denominador + 2);
            denominador = denominador * denominador * denominador;
            SegundaOP = numerador / denominador;
            H = PrimeiraOP + SegundaOP;
            cout <<"na " << contador <<  "° vez, H vale:" << H << endl;
        }


        pairOrEven = pairOrEven + 1;
        PrimeiraOP = SegundaOP;
    }


}
