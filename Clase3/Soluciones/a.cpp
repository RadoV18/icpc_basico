#include <iostream>

using namespace std;

int main(){
    //a) Identificar cuantos números son pares del 1 al 100, utilizando un while, un for y un do while
    int w = 0, contadorWhile = 0;
    while(w <= 100){
        w++;
        if(w % 2 == 0){
            contadorWhile++;
        }
       
    }
    printf("Dentro del while existen: %d numeros pares \n", contadorWhile);
    
    int contadorFor = 0;
    for(int i = 1; i <= 100; i++){
        if(i % 2 == 0){
            contadorFor++;
        }
    }
    printf("Dentro del for existen: %d numeros pares \n", contadorFor);
    
    int d = 0, contadorDo = 0;
    do{
        d++;
        if(d % 2 == 0){
            contadorDo++;
        }
        
    } while(d <= 100);
    
    printf("Dentro del do while existen: %d numeros pares \n", contadorDo);
    
    
    return 0;
}