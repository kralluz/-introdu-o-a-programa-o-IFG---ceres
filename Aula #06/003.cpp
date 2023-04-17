#include<iostream>

using namespace std;

int main()
{
    int password;
    cout << "digite a senha" << endl;
    cin >> password;
    if (password == 1234) {
        cout << "Logado com sucesso!";
    } 
    else {
        cout << "Acesso Negado!";
    };
    return 0;
}
