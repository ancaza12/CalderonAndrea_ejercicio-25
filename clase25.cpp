#include <iostream>
void relleno(int num,float **matriz);
void imprimeCabezas(int num,float **matriz);
void imprimeMatriz(int num,float **matriz);

int main(){
    int num;
    std::cout << "Ingrese un número del 3 al 11"<< std::endl;
    std::cin >> num;
    
    if(num>=3 && num<=11){
        float ** matriz = new float *[num];
        for (int i = 0; i < num; ++i){
            matriz[i] = new float[num+2];
        }
    relleno(num,matriz);
    imprimeCabezas(num,matriz);
    imprimeMatriz(num,matriz); 
    }
    else{
        std::cout << "No es un número del 3 al 11"<< std::endl;
    }
    return 0;
}

void relleno(int num,float **matriz){
        std::cout << "Vector de primer fila" << std::endl;

        for(int fi=0; fi<num+2; fi++){ 
            for(int co =0; co<num;co++){
                float result= fi+co;
                matriz[co][fi]= result;
        }
    }  
}

void imprimeCabezas(int num,float **matriz){
    int sumafi=0;
    int sumaco=0;
    for(int fi=0; fi<num; fi++){ 
        std::cout << matriz[fi][0]<< std::endl;
        sumafi= sumafi + matriz[fi][0];
        }
    std::cout<< std::endl;
    for(int co=0; co<num+2; co++){ 
        sumaco= sumaco + matriz[0][co];
        }
    std::cout <<"Sumatoria primer columna: "<< sumaco<< std::endl;
    std::cout<< std::endl;
}

void imprimeMatriz(int num,float **matriz){
    std::cout << "Matriz"<< std::endl;
    for(int co =0; co<num+2;co++){
        for(int fi=0; fi<num; fi++){ 
            std::cout << matriz[fi][co];
        }
    std::cout<< std::endl;        
    }
}