#include <iostream>

using namespace std;

int main() {
    float altura_degrau, altura_objetivo;
    cout << "Altura do degrau (em metros): ";
    cin >> altura_degrau;
    cout << "Altura do objetivo (em metros): ";
    cin >> altura_objetivo;

    int num_degraus = altura_objetivo / altura_degrau;
    cout << "Número de degraus: " << num_degraus << endl;

    return 0;
}
