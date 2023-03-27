#include <iostream>
using namespace std;

int main()
{
    // Declaração das variáveis
    float a, b;

    // Atribuição de valores às variáveis
    a = 5;
    b = 2;

    // Saída dos valores das variáveis
    cout << "O valor de A é: " << a << ", e o valor de B é: " << b << endl;

    // Troca dos valores das variáveis
    a = a + b; // A recebe a soma de A e B
    b = a - b; // B recebe o valor de A (que agora é A+B) subtraído de B, o que resulta em A
    a = a - b; // A recebe o valor de A (que agora é A+B) subtraído de B, o que resulta em B

    // Saída dos valores das variáveis após a troca
    cout << "Após a troca de valores o resultado é: " << endl;
    cout << "O valor de A é: " << a << ", e o valor de B é: " << b << endl;

    return 0;
}


//Basicamente, o programa começa declarando duas variáveis do tipo float, a e b, e atribuindo valores a elas (respectivamente 5 e 2). Em seguida, ele imprime os valores das variáveis na tela.

//Depois disso, temos a troca dos valores das variáveis. Essa operação é feita da seguinte forma:

//a recebe a soma de a e b, que resulta em 7 (5 + 2).
//b recebe o valor de a (que agora é 7) subtraído de b (que é 2), o que resulta em 5 (7 - 2). Nesse momento, b passa a ter o valor que a tinha no início do programa.
//a recebe o valor de a (que agora é 7) subtraído de b (que é 5), o que resulta em 2 (7 - 5). Nesse momento, a passa a ter o valor que b tinha no início do programa.
//Por fim, o programa imprime na tela os novos valores de a e b.