
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
