/*
b) Calcular el promedio de n estudiantes:
    
    INPUT
    
    Ingrese la cantidad de estudiantes: 3
    Ingrese la nota del estudiante 1: 50
    Ingrese la nota del estudiante 2: 60
    Ingrese la nota del estudiante 3: 71
    
    OUTPUT
    
    El promedio del curso es igual a: 60.33
*/

#include <iostream>


using namespace std;

int main(){
    int numeroEstudiantes;
    float totalNotas = 0, nota;
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &numeroEstudiantes);
    
    for(int i = 0; i < numeroEstudiantes; i++){
        printf("Ingrese la nota del estudiante %d: ", i+1);
        scanf("%f", &nota);
        totalNotas+=nota;
    }
    
    float promedio =  totalNotas/numeroEstudiantes;
    
    //NúMERO DE DECIMALES EXACTO
    
    printf("El promedio del curso es igual a: %0.2lf \n",promedio);
    return 0;
}