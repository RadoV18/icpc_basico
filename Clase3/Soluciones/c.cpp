
/*
c) Validar cuantos números son primos hasta n

    INPUT   
    
    Ingrese el limite: 5
    
    OUTPUT
    
    Existen 3 números primos del 1 al 5
*/


#include <iostream>

using namespace std;

int main(){
    int n;
    printf("Ingrese el limite: ");
    scanf("%d", &n);
    int primos = 0;
    
    for(int i = 1; i <= n; i++){
        int c = 0;
        for(int j = 1; j <= i; j++){
            if(i % j == 0 ){
                c++;
            }
            
        }
        if(c == 2){
            primos++;
            c = 0;
        }
    }
    
    printf("Existen %d numeros primos del 1 al %d\n", primos, n);
    return 0;
}