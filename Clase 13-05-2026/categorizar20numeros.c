#include <stdio.h>
#include <stdbool.h>
//consigna: hacer que el usuario ingrese 20 numeros, mostrar en pantall cuantos son negativos, cuantos son positivos y cuantos son cero.
int main(){
    int num;
    int contador_cero = 0;
    int contador_neg = 0;
    int contador_pos = 0;

    for(int x = 1; x <=20; x++){
        printf("Ingrese un numero");
        scanf(" %d", &num);
        if(num > 0){
            contador_pos ++;
        }else if(num<0){
            contador_neg ++;
        }else{
            contador_cero ++;
        }
    }

    printf("Hubieron %d positivos\n", contador_pos);
    printf("Hubieron %d negativos\n", contador_neg);
    printf("Hubieron %d ceros\n", contador_cero);

}
