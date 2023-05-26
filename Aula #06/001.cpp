#include<iostream>

using namespace std;

int main()
{
    int a, b, c, d, e;

    cout << "digite os valores de a, b, c, d, e" << endl;
    cin >> a >> b >> c >> d >> e;
    
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
    
    cout << "Pitanga";
    return 0;
}
