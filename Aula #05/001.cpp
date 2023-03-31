#include<iostream> // Esta linha inclui a biblioteca iostream que contém funções para entrada e saída de dados.
#include<cmath> // Esta linha inclui a biblioteca cmath que contém funções matemáticas, incluindo a função sqrt que é usada para calcular a raiz quadrada.
using namespace std; // Esta linha indica que estamos usando o espaço de nomes std, que contém as funções da biblioteca padrão do C++.

int main()
{
float x1, x2, y1, y2; // Esta linha declara as quatro variáveis que vão armazenar as coordenadas dos pontos.

cout << "Digite os valores de x1, x2, y1, y2 separados por um espaço " << endl; // Esta linha imprime uma mensagem pedindo que o usuário digite as coordenadas dos pontos.
cin >> x1 >> x2 >> y1 >> y2; // Esta linha lê as coordenadas dos pontos digitadas pelo usuário e armazena nas respectivas variáveis.
3
float dx = x2 - x1; // Esta linha calcula a diferença entre as coordenadas x dos pontos P e Q e armazena na variável dx.
float dy = y2 - y1; // Esta linha calcula a diferença entre as coordenadas y dos pontos P e Q e armazena na variável dy.

dx = dx * dx; // Esta linha eleva ao quadrado a diferença de x entre os pontos P e Q, armazenando o resultado na variável dx.
dy = dy * dy; // Esta linha eleva ao quadrado a diferença de y entre os pontos P e Q, armazenando o resultado na variável dy.

float distancia = sqrt(dx + dy); // Esta linha calcula a distância entre os pontos P e Q usando a fórmula da distância euclidiana e armazena o resultado na variável distancia.

cout << "A distancia entre os pontos P e Q e: " << distancia << endl; // Esta linha imprime a distância entre os pontos P e Q.
return 0; // Esta linha encerra o programa.
}