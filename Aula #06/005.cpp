#include <iostream>

using namespace std;

int main()
{
    // Declaração das variáveis altura, pesoIdeal e sexo
    float altura, pesoIdeal;
    char sexo;

    // Solicita ao usuário que digite a altura da pessoa
    cout << "Digite a altura da pessoa: ";
    cin >> altura;

    // Solicita ao usuário que digite o sexo da pessoa
    cout << "Digite o sexo da pessoa (M ou F): ";
    cin >> sexo;

    // Verifica se o sexo digitado é masculino
    if (sexo == 'M' || sexo == 'm') {
        // Calcula o peso ideal para homens
        pesoIdeal = 72.7 * altura - 58;
    }
    // Verifica se o sexo digitado é feminino
    else if (sexo == 'F' || sexo == 'f') {
        // Calcula o peso ideal para mulheres
        pesoIdeal = 62.1 * altura - 44.7;
    }
    // Se o sexo digitado não for 'M' ou 'F', exibe uma mensagem de erro e encerra o programa
    else {
        cout << "Sexo inválido." << endl;
        return 1;
    }

    // Exibe o peso ideal calculado para a pessoa
    cout << "O peso ideal para uma pessoa do sexo " << sexo << " e altura " << altura << " é " << pesoIdeal << " kg." << endl;

    // Indica que o programa foi executado com sucesso
    return 0;
}
