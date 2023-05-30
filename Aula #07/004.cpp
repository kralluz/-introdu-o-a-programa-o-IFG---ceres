#include<iostream>
#include<cmath> 
using namespace std;

int main()
{
    float peso, altura;
    std::cout << "digite o peso" << std::endl;
    std::cout << "digite a altura" << std::endl;
    
    
    if (altura < 1.2){
        if (peso <= 60){
            std::cout << "A" << std::endl;
            
        }else if (peso > 60 && peso <= 90){
            std::cout << "D" << std::endl;
            
        }else{
            std::cout << "G" << std::endl;

        }
    }else if (altura >= 1.2 || altura <= 1.7){
                if (peso <= 60){
            std::cout << "A" << std::endl;
            
        }else if (peso > 60 && peso <= 90){
            std::cout << "D" << std::endl;
            
        }else{
            std::cout << "G" << std::endl;

        }
    }else {
                if (peso <= 60){
            std::cout << "A" << std::endl;
            
        }else if (peso > 60 && peso <= 90){
            std::cout << "D" << std::endl;
            
        }else{
            std::cout << "G" << std::endl;

        }
    }

}
