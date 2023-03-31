/* Para resolver esse problema, é necessário utilizar o Teorema de Pitágoras. Sabemos que a distância que a escada deve estar da parede é a hipotenusa de um triângulo retângulo, cujos catetos são a altura em que o quadro deve ser pregado e o tamanho da escada. Assim, podemos calcular a distância com a seguinte fórmula:

d = sqrt(h^2 + e^2)

onde d é a distância que a escada deve estar da parede, h é a altura em que o quadro deve ser pregado e e é o tamanho da escada. */

#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
float h, e, d;

cout<<"informe a altura em que o quadro deve ser pregado\n"<<endl;
cin>>h;

cout<<"informe o tamanho da escada\n"<<endl;
cin>>e;

d = (h*h+e*e)

cout << "A distância em que a escadda deve estar da parede é de "<< d <<endl;

}