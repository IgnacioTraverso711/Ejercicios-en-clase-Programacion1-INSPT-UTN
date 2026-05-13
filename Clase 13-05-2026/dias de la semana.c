#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

//consigna: definir si un dia de la semana es habil o no dependiendo de su numero (1 es igual a lunes).

int main(){
    int dia;
    printf("ingresa un numero del 1 al 7");
    scanf("  %d", &dia);
    if(dia < 1 || dia > 7){
        printf("No es un dia de la semana");
    }else{
        if(dia >= 6){
            printf("Finde");
        }else{
            printf("Dia Habil");
        }
    }
    return 0;
}
