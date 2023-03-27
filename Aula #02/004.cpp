#include <iostream>
using namespace std;

int main()
{
    string name; // Declaração da variável name como uma string já que a string armazena vários caracteres
    float nota1, nota2, nota3, nota4, media ; // Declaração das variáveis das notas e da média

    // Recebendo os dados (nome completo do usuário)
    cout << "Qual o seu nome?\n";
    getline(cin, name); // Utiliza a função getline para ler o nome do usuário com espaços em branco

    cout << "Digite as suas 4 notas dos bimestres separadas por um espaço!\n";
    cin >> nota1 >> nota2 >> nota3 >> nota4; // Lê as notas bimestrais do usuário

    // Cálculo da média aritmética
    media = (nota1 + nota2 + nota3 + nota4) / 4; // Soma todas as notas e divide por 4 para calcular a média

    // Exibição das médias
    cout << "Olá " << name << ", a sua média anual é de: " << media << "%" << endl; // Exibe a média anual
    cout << name << ", a sua média semestral é de: " << media/2 << "%" << endl; // Exibe a média semestral

    return 0;
}