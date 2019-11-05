#include <iostream>
#include <random>
#include <stdlib.h>
#include <cmath>

int main(){
    int num;
    std::cout << "Ingrese un número del 3 al 11"<< std::endl;
    std::cin >> num;
    
    if(num>3 && num<11){
        float matriz[num+2][num];
    }
    else{
        std::cout << "No es un número del 3 al 11"<< std::endl;
    }
    return 0;
}

void relleno(float matriz){
        for(int fi=0; fi<num+2; fi++){ 
            for(int co =0, co<num,co++){
                matriz[fi][co]= fi+co;
        }
    }
}

void imprimeCabezas(float matriz){
        for(int fi=0; fi<num+2; fi++){ 
            for(int co =0, co<num,co++){
               std::cout << matriz[fi][0]<< std::endl;
                int suma=0;
                suma= suma+matriz[fi][co];
                std::cout << "suma:"<< suma << std::endl;
        }
    }
}
