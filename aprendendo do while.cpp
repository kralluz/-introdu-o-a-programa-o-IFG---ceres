#include<iostream>
#include<cmath> 
using namespace std;


// Construa um programa em C++ que calcule o valor dos dez primeiros termos da série H, em que:
// H = (1 / 13) - (1 / 33) + (1 / 53) - (1 / 73) + (1 / 93)


int main() {

float denominador = 13 ;    
float numerador = 1;
int pairOrEven = 1;
float H;
// primeira operação 
float PrimeiraOP;
// operação seguinte
float SegundaOP;


    for (int contador = 0; contador <= 10; contador++){
        
        //ímpar ou par 
        if(pairOrEven % 2 ) { // SE FOR PAR
            PrimeiraOP = numerador / denominador; //
            denominador = denominador + 20;
            SegundaOP = numerador / denominador;
            H = PrimeiraOP - SegundaOP;
            cout <<"na " << contador <<  " vez, H vale:" << H << endl;


        }else { // SE FOR ÍMPAR
            PrimeiraOP = numerador / denominador; //
            denominador = denominador + 20;
            SegundaOP = numerador / denominador;
            H = PrimeiraOP + SegundaOP;
            cout <<"na " << contador <<  " vez, H vale:" << H << endl;

        }


        pairOrEven = pairOrEven + 1;
        PrimeiraOP = SegundaOP;
    }


}
