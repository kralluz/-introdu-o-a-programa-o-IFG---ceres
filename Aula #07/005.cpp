#include<iostream>
#include<cmath> 
using namespace std;



//5. Escreva um programa em C++ que receba quatro valores: I, A, B e C.
//Desse valores, I é inteiro positivo podendo ter os valores 1, 2 ou 3; A, B
//e C são reais. Escreva os números A, B e C obedecendo a tabela à seguir.
//Suponha que o valor digitado para I seja sempre válido (1, 2 ou 3) e que
//os números digitados sejam diferentes.
//Valor de I Forma de escrever
//1 A, B e C em ordem crescente
//2 A, B e C em ordem decrescente
//3 O maior fica entre os outros números
int main()
{
    int i;
    float A, B, C;
    std::cout << "Digite o Valor de i" << std::endl;
    std::cin >> i;
    while ( i != 1 || i!= 2 || i!= 3 ){
        std::cout << "Valor inválido digite o Valor de i" << std::endl;
        std::cin >> i;
    }
    std::cout << "Digite os valores de A, B e C respectiamente separados or espaço" << std::endl;
    std::cin >> A >> B >> C;
        
        if (i = 1){

        }
    switch(i) {
        case 1:
            if (A > B && B > C){
                cout << A << " - " << B << " - " << C << endl;
            }else if (A > C && C > B){
                cout << A << " - " << C << " - " << B << endl;
            }else if (B > A && A > C){
                cout << B << " - " << A << " - " << C << endl;
            }else if(B > C && C > A){
                cout << B << " - " << C << " - " << A << endl;
            }else if(C > A && A > B){
                cout << C << " - " << A << " - " << B << endl;
            }else if(C > B && B > A){
                cout << C << " - " << B << " - " << A << endl;
            }
            break

        case 2:
            if (A < B && B < C){
                cout << A << " - " << B << " - " << C << endl;
            }else if (A > C && C > B){
                cout << A << " - " << C << " - " << B << endl;
            }else if (B > A && A > C){
                cout << B << " - " << A << " - " << C << endl;
            }else if(B > C && C > A){
                cout << B << " - " << C << " - " << A << endl;
            }else if(C > A && A > B){
                cout << C << " - " << A << " - " << B << endl;
            }else if(C > B && B > A){
                cout << C << " - " << B << " - " << A << endl;
            }
            break

        case 3:
            if (A > B && B > C){
                cout << A << " - " << B << " - " << C << endl;
            }else if (A > C && C > B){
                cout << A << " - " << C << " - " << B << endl;
            }else if (B > A && A > C){
                cout << B << " - " << A << " - " << C << endl;
            }else if(B > C && C > A){
                cout << B << " - " << C << " - " << A << endl;
            }else if(C > A && A > B){
                cout << C << " - " << A << " - " << B << endl;
            }else if(C > B && B > A){
                cout << C << " - " << B << " - " << A << endl;
            }
            break

        default
    }   



}

