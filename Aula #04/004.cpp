/* Construa um programa para calcular as raízes de uma equação do 2º grau
(Ax² + Bx + C), sendo que os valores A, B e C são fornecidos para o usuário.
Considere que a equação possui duas raízes reais e os cálculos para
encontrá-las devem seguir as seguintes fórmulas:
x = , onde −b±√Δ
2∗a
Δ=b
2−4∗a∗c */

#include <iostream> // Biblioteca de entrada e saída padrão
#include <cmath>    // Biblioteca de funções matemáticas

using namespace std;

int main() {        // Função principal
    float x, a, b, c, d;   // Declaração das variáveis a serem utilizadas

    cout << "Vamos resolver uma equação do segundo grau" << endl;  // Imprime mensagem na tela
    cout << "ax² + bx + c = 0" << endl;    // Imprime mensagem na tela
    cout << "Digite os valores de a, b e c, respectivamente:" << endl;  // Imprime mensagem na tela
    cin >> a >> b >> c;   // Lê os valores de a, b e c do usuário

    d= (b*b) - 4*a*c;    // Calcula o discriminante da equação

    if (d >= 0) { // Verifica se a equação tem soluções reais
    x = (-b + sqrt(d)) / (2*a); // Calcula a primeira raiz da equação
    cout << "x1 = " << x << endl; // Imprime a primeira raiz na tela

    x = (-b - sqrt(d)) / (2*a); // Calcula a segunda raiz da equação
    cout << "x2 = " << x << endl; // Imprime a segunda raiz na tela 
    } else {
    cout << "A equação não tem soluções reais." << endl; // Imprime mensagem de erro na tela
    }

    return 0; // Retorna zero, indicando que o programa foi executado com sucesso
}