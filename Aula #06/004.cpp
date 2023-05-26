#include<iostream>

using namespace std;

int main()
{
    int media_1, media_2;
    cout << "digite a primeira média bimestral" << endl;
    cin >> media_1;
    
        cout << "digite a segunda média bimestral" << endl;
        cin >> media_2;
        
        float  media_semestral = (media_2 + media_1) / 2;
        
    if (media_semestral >= 7) {
        cout << "Aprovado!";
    } 
    else {
        cout << "Reprovado!";
    };
    return 0;
}
