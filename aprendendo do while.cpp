#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(0)); // inicializa a semente do gerador de números aleatórios
    int numero_correto = rand() % 100 + 1; // gera um número aleatório entre 1 e 100
    int palpite;

    do {
        cout << "Adivinhe um número entre 1 e 100: ";
        cin >> palpite;

        if (palpite == numero_correto) {
            cout << "Parabéns, você acertou!\n";
        } else if (palpite < numero_correto) {
            cout << "O número correto é maior.\n";
        } else {
            cout << "O número correto é menor.\n";
        }

        cout << "Pressione Enter para continuar...";
        cin.ignore(); // aguarda o usuário pressionar Enter
        system("clear"); // limpa a tela (no Linux ou macOS) ou system("cls") (no Windows)
    } while (palpite != numero_correto);
    
}
// Online C++ Compiler - Build, Compile and Run your C++ programs online in your favorite browser

#include<iostream>

using namespace std;

int main()
{
    int chute, numeroImaginado, quantidadeDeChute = 0;
    std::cin >> numeroImaginado;
    std::cout << "\e[2j";
    do {
    std::cout << "tente adivinhar!" << std::endl;
    std::cin >> chute;
    quantidadeDeChute = quantidadeDeChute++;
    if (chute > numeroImaginado){
        std::cout << "chutou auto" << std::endl;
    }else if(chute < numeroImaginado){
        std::cout << "chutou baixo" << std::endl;
    }
    
    } while(chute != numeroImaginado);
    
    std::cout << "vc precisou de " << quantidadeDeChute << "para acertar" << std::endl;
    
    return 0;
}
