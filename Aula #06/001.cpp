#include<iostream>

using namespace std;

int main()
{
    int a = 2, b = 5, c = 3, d = 3, e = 4;
    if (a == 2) {
        cout << "Laranja ";
        if (b == 5) {
            cout << "Uva ";
        }
        cout << "Melancia ";
        if (d == 3){
            cout << "Pera ";
        } else {
            cout << "Morango ";
        }
        
    }
    else {
        if (c == 3){
            cout << "limao";
        }
        if  (e == 4) {
            cout << "Abacate";
            cout << "Abacaxi";
        }
    }
    
    cout << "Abacate";
    return 0;
}
